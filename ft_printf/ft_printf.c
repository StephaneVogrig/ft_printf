/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:00:52 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/19 01:17:09 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

/*
	printf fonction send a srting whith formated variables to stdout.
	The string 'format' contain a character '%' for each variable.
	The following characters after '%' specifies the conversion of the variable.

	Conversions specifiers :
	'c' print a single character;
	's' print a string;
	'p'	print a pointer in hexadecimal format;
	'd' print a decimal number.
	'i' print an int in base 10.
	'u' print an unsigned decimal number
	'x' print a number in hexadecimal lowercase format
	'X' print a number in hexadecimal uppercase format
	'%' prints '%'

		%[flags][width][.precision][length]specifier

	characters used :diuoxXfFeEgGaAcspn%-+ #0*.hljztL
*/


ssize_t	print_arg(const char *format, va_list args)
{
	if (*format == 'c')
		return (print_c(va_arg(args, int)));
	if (*format == 's')
		return (print_s(va_arg(args, char *)));
	if (*format == '%')
		return (write(1, "%", 1));
	if (*format == 'p')
		return (print_p(va_arg(args, void*)));
	if (*format == 'd' || *format == 'i')
		return (print_i(va_arg(args, int)));
	if (*format == 'u')
		return (print_ui(va_arg(args, unsigned int)));
	if (*format == 'x')
		return (print_uix(va_arg(args, unsigned int)));
	if (*format == 'X')
		return (print_uiX(va_arg(args, unsigned int)));
	if (*format == '\0')
		return (write(1, format - 1, 1));
	return (write(1, format - 1, 2));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	ssize_t		len_write;

	if (!format || (*format == '%' && format[1] == '\0'))
		return (-1);
	len_write = 0;
	va_start(args, format);
	while (*format)
	{
		while (*format && *format != '%')
			len_write += write(1, format++, 1);
		if (*format == '%')
		{
			len_write += print_arg(++format, args);
			if (*format)
				format++;
		}
	}
	va_end(args);
	return (len_write);
}
