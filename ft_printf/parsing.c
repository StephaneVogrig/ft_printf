/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:22:30 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/03 14:27:54 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

static unsigned long long	arg_to_ull(va_list args, t_spec *spec)
{
	if (spec->length[0] == 'l')
	{
		if (spec->length[1] == 'l')
			return (va_arg(args, unsigned long long));
		return ((unsigned long long)va_arg(args, unsigned long));
	}
	return ((unsigned long long)va_arg(args, unsigned int));
}

static long long	arg_to_ll(va_list args, t_spec *spec)
{
	int	arg;
	if (spec->length[0] == 'l')
	{
		if (spec->length[1] == 'l')
			return (va_arg(args, long long));
		return ((long long)va_arg(args, long));
	}
	arg = va_arg(args, int);
	if (arg == INT_MIN)
		return (INT_MIN);
	if (arg < 0)
		return (-(long long)(-arg));
	return ((long long)arg);
}

static int	format_arg(va_list args, t_spec *spec, t_buffer *buffer)
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
	else if (spec->conversion == 'i' || spec->conversion == 'd')
		success = format_i(arg_to_ll(args, spec), spec, buffer);
	else if (spec->conversion == 'u')
		success = format_u(arg_to_ull(args, spec), spec, buffer);
	else if (spec->conversion == 'x')
		success = format_x(arg_to_ull(args, spec), spec, buffer);
	else if (spec->conversion == 'X')
		success = format_X(arg_to_ull(args, spec), spec, buffer);
	return (success);
}

const char	*parse_arg(const char *format, t_buffer *buffer, va_list args, \
			int *spec_errors)
{
	t_spec	spec;

	format = set_flags(format, &spec);
	format = set_widthfield(format, &spec, args);
	if (!format)
		return (NULL);
	format = set_precision(format, &spec, args);
	if (!format)
		return (NULL);
	format = set_length(format, &spec);
	format = set_conversion(format, &spec);
	if (spec.conversion)
		format_arg(args, &spec, buffer);
	else if ((*format == '\0') && (*spec_errors == 0))
		return (NULL);
	else
		*spec_errors += buffer_add_spec(buffer, &spec);
	return (format);
}
