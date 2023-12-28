/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:22:30 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/27 21:19:04 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

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

int	convert_arg(va_list args, t_spec *spec, t_buffer *buffer)
{
	int	success;

	success = 0;
	if (spec->conversion == 'c')
		success = format_c(va_arg(args, int), spec, buffer);
	else if (spec->conversion == 's')
		success = format_s(va_arg(args, char *), spec, buffer);
	else if (spec->conversion == '%')
		success = format_pc(buffer);
	else if (spec->conversion == 'p')
		success = format_p(va_arg(args, void *), spec, buffer);
	else if (spec->conversion == 'd' || spec->conversion == 'i')
		success = format_i(args, spec, buffer);
	else if (spec->conversion == 'u')
		success = format_u(args, spec, buffer);
	else if (spec->conversion == 'x' || spec->conversion == 'X')
		success = format_u(args, spec, buffer);
	return (success);
}

const char	*parse_arg(const char *format, t_buffer *buffer, va_list args, \
			int *spec_errors)
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
	else if ((*format == '\0') && (*spec_errors == 0))
		return (NULL);
	else
		*spec_errors += buffer_add_spec(buffer, &spec);
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
