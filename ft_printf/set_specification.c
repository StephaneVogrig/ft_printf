/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_specification.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:10:29 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/03 15:36:13 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

const char	*set_flags(const char *format, t_spec *spec)
{
	spec->flag_hash = 0;
	spec->flag_zero = 0;
	spec->flag_minus = 0;
	spec->flag_space = 0;
	spec->flag_plus = 0;
	while (*format)
	{
		if (*format == '#')
			spec->flag_hash = 1;
		else if (*format == '0')
			spec->flag_zero = 1;
		else if (*format == '-')
			spec->flag_minus = 1;
		else if (*format == ' ')
			spec->flag_space = 1;
		else if (*format == '+')
			spec->flag_plus = 1;
		else
			return (format);
		format++;
	}
	return (format);
}

const char	*set_widthfield(const char *format, t_spec *spec, va_list args)
{
	long long	w;

	spec->width = -1;
	if (*format == '*')
	{
		spec->width = va_arg(args, int);
		if (spec->width < 0)
		{
			spec->flag_minus = 1;
			spec->width = -spec->width;
		}
		return (++format);
	}
	if (!ft_isdigit(*format))
		return (format);
	w = 0;
	while (ft_isdigit(*format))
	{
		w = w * 10 + *format - '0';
		if (w > INT_MAX)
			return (NULL);
		format++;
	}
	spec->width = (int)w;
	return (format);
}

const char	*set_precision(const char *format, t_spec *spec, va_list args)
{
	long long	p;

	spec->precision = -1;
	if (*format != '.')
		return (format);
	format++;
	if (*format == '*')
	{
		spec->precision = va_arg(args, int);
		if (spec->precision < 0)
			spec->precision = -1;
		return (++format);
	}
	p = 0;
	while (ft_isdigit(*format))
	{
		p = p * 10 + *format - '0';
		if (p > INT_MAX)
			return (NULL);
		format++;
	}
	spec->precision = (int)p;
	return (format);
}

const char	*set_length(const char *format, t_spec *spec)
{
	spec->length[0] = 0;
	spec->length[1] = 0;
	if (*format == 'l')
	{
		spec->length[0] = *format++;
		if (*format == 'l')
			spec->length[1] = *format++;
	}
	else if (*format == 'h')
	{
		spec->length[0] = *format++;
		if (*format == 'h')
			spec->length[1] = *format++;
	}
	return (format);
}

const char	*set_conversion(const char *format, t_spec *spec)
{
	char	*conversion;

	spec->conversion = 0;
	if (!*format)
		return (format);
	conversion = ft_strchr("cspdiuxX%f", *format);
	if (!conversion)
		return (format);
	spec->conversion = *format;
	return (++format);
}
