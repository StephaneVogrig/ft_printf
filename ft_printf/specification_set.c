/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specification_set.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:10:29 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 19:40:20 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
	analyze the format string to set up the specification fields.
	return:
		- a pointeur on the first character that stop the analyze
		- NULL in case of overflow during conversion of
		  width field or precision
*/

const char	*set_flags(const char *format, t_spec *spec)
{
	char	*flag;

	while (*format)
	{
		flag = ft_memchr("#0- +", *format, 5);
		if (!flag)
			return (format);
		if (*flag == '#')
			spec->flag_hash = 1;
		else if (*flag == '0')
			spec->flag_zero = 1;
		else if (*flag == '-')
			spec->flag_minus = 1;
		else if (*flag == ' ')
			spec->flag_space = 1;
		else if (*flag == '+')
			spec->flag_plus = 1;
		format++;
	}
	return (format);
}

const char	*set_widthfield(const char *format, t_spec *spec)
{
	long long	w;

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

const char	*set_precision(const char *format, t_spec *spec)
{
	long long	p;

	if (*format != '.')
		return (format);
	format++;
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
	if (*format == 'l')
	{
		spec->length[0] = *format++;
		if (*format == 'l')
			spec->length[1] = *format++;
	}
	return (format);
}

const char	*set_conversion(const char *format, t_spec *spec)
{
	char	*conversion;

	conversion = ft_memchr("cspdiuxX%", *format, 9);
	if (!conversion)
		return (format);
	spec->conversion = *format;
	return (++format);
}
