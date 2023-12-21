/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:22:30 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 12:36:50 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_arg(va_list args, t_spec *spec, t_buffer *buffer)
{
	if (spec->conversion == 'c')
		format_c(va_arg(args, int), spec, buffer);
	else if (spec->conversion == 's')
		format_s(va_arg(args, char *), spec, buffer);
	else if (spec->conversion == '%')
		buffer_add_char(buffer, '%', 1);
	else if (spec->conversion == 'p')
		format_p(va_arg(args, void *), spec, buffer);
	else if (spec->conversion == 'd' || spec->conversion == 'i')
		format_i(args, spec, buffer);
	else if (spec->conversion == 'u')
		format_u(args, spec, buffer);
	else if (spec->conversion == 'x' || spec->conversion == 'X')
		format_u(args, spec, buffer);
}

void	specification_init(t_spec *specification)
{
	specification->flag_hash = 0;
	specification->flag_zero = 0;
	specification->flag_minus = 0;
	specification->flag_space = 0;
	specification->flag_plus = 0;
	specification->width = -1;
	specification->precision = -1;
	specification->length[0] = 0;
	specification->length[1] = 0;
	specification->conversion = 0;
}

const char	*parse_arg(const char *format, t_buffer *buffer, va_list args)
{
	t_spec	spec;

	specification_init(&spec);
	format = set_flags(format, &spec);
	format = set_widthfield(format, &spec);
	if (!format)
		return (NULL);
	format = set_precision(format, &spec);
	if (!format)
		return (NULL);
	format = set_length(format, &spec);
	format = set_conversion(format, &spec);
	if (spec.conversion)
		convert_arg(args, &spec, buffer);
	return (format);
}

const char	*parse_before_arg(const char *format, t_buffer *buffer)
{
	while (*format)
	{
		if (*format == '%')
			break ;
		buffer->data[buffer->offset++] = *format++;
		if (buffer->offset == BUFFER_SIZE)
		{
			buffer->writed += write(1, buffer->data, BUFFER_SIZE);
			buffer->offset = 0;
		}
	}
	return (format);
}
