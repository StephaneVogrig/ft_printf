/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:00:52 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 03:27:22 by svogrig          ###   ########.fr       */
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

		%[flags][field width][.precision][length]specifier
		
	flags : # 0 - ' ' +
		There may be an "unlimited" number of these flags.
		If the specifier is missing, are printed in the order :
			- one # if present in the format,
			- one + if present in the format,
			- one ' ' if present in the format and not '+'
			- one - if present in the format.
			- one 0 if present in the format and not '-'

		#	for x conversion begin a nonzero conversion with '0x'
			for X conversion begin a nonzero conversion with '0X'

		0	For d, i, o, u, x and X conversions, the converted value
            is padded on the left with zeros rather than blanks.
			It is ignored if flag - is present

		-	left align on the field boundary. The converted value is padded
			on the right with blanks.
			Flag '0' is ignored.

		' '	for d and i, a blank should be left before positive value
			is ignored if flag + is present.

		+	for d and i, add '+' behind a positive value.
			If precision is passed '+' is added before precision.
			If field width is passed and flag 0,
				'+' replace the first '0' in the field

	field width : decimal digit string with nonzero first digit.
		Specify a minimum field width.
		- If overflow during the decimal digit string conversion,
			- stop format conversion,
			- print the string already set
			- return -1.
		- If converted value has more characters the field is expanded
		  to contain all charachters.
		- If converted value has fewer characters it will be padded whith space
		  or '0' if flag '0' and no flag '-'.
		- If flag '-', converted value is left align and ' ' complet the field

	precision : '.' followed by an optional positive decimal string
		- There may be an "unlimited" number of zero to begin the decimal string
		- If no decimal sring is present, 0 is use by default
		- The precision value is limited to an int.
		- If overflow during the decimal digit string conversion,
			- stop format conversion,
			- print the string already set
			- return -1.
		- If the specifier is missing :
			- if '.' is not present in format,
					nothing is printed .
			- if '.' without decimal string is present,
					'.0' is printed.
			- if '.' followed by decimal string is present,
					'.' followed by precision value convert in string is printed
		* For d, i, o, u, x, and X conversions, precision give the minimum
		  digits to appear. '0' is placed if necessary.
		* For s conversion, give the maximum number of characters to be printed

	length : hh h l ll q L j z Z t

	specifier : d i o u x X e E f F g G a A c s p n m %
		If the specifier is missing
			- if it is the first missing AND is at the end of format
				- nnothing of the conversion is printing
				- return -1
			- in all other case a string of the data conversion is printing
			  as describes in their own part.
				

	
	characters used :diuoxXfFeEgGaAcspn%-+ #0*.hljztL
*/

int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_buffer	buffer;
	ssize_t		writed;

	if (!format)
		return (-1);
	buffer.offset = 0;
	buffer.writed = 0;
	va_start(args, format);
	while (format && *format)
	{
		format = process_before_arg(format, &buffer);
		if (*format == '%')
			format = process_arg(format + 1, &buffer, args);
	}
	va_end(args);
	writed = buffer_print(buffer);
	if (!format)
		return (-1);
	return (writed);
}
