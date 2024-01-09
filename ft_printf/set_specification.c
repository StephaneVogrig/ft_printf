/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_specification.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:10:29 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/05 22:34:56 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

void	set_complements(t_spec *spec)
{
	if (spec->flag_minus)
	{
		spec->left_align = TRUE;
		spec->right_align = FALSE;
	}
	else
	{
		spec->left_align = FALSE;
		spec->right_align = TRUE;
	}
	spec->prefix = 0;
	if (spec->flag_space)
		spec->prefix = ' ';
	if (spec->flag_plus)
		spec->prefix = '+';
}

const char	*set_flags(const char *format, t_spec *spec)
{
	spec->flag_hash = FALSE;
	spec->flag_zero = FALSE;
	spec->flag_minus = FALSE;
	spec->flag_space = FALSE;
	spec->flag_plus = FALSE;
	while (*format)
	{
		if (*format == '#')
			spec->flag_hash = TRUE;
		else if (*format == '0')
			spec->flag_zero = TRUE;
		else if (*format == '-')
			spec->flag_minus = TRUE;
		else if (*format == ' ')
			spec->flag_space = TRUE;
		else if (*format == '+')
			spec->flag_plus = TRUE;
		else
			break;
		format++;
	}
	set_complements(spec);
	return (format);
}

const char	*set_widthfield(const char *format, t_spec *spec, va_list args)
{
	spec->width = -1;
	if (*format == '*')
	{
		spec->width = va_arg(args, int);
		if (spec->width < 0)
		{
			spec->flag_minus = 1;
			spec->left_align = TRUE;
			spec->right_align = FALSE;
			spec->width = -spec->width;
		}
		return (++format);
	}
	return (str_to_int((char*)format, &spec->width));
}

const char	*set_precision(const char *format, t_spec *spec, va_list args)
{
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
	spec->precision = 0;
	return (str_to_int((char*)format, &spec->precision));
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
