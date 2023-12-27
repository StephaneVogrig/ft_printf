/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:00:52 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/27 21:12:07 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	t_buffer	buffer;
	ssize_t		writed;
	int			spec_errors;

	spec_errors = 0;
	if (!format)
		return (-1);
	buffer.offset = 0;
	buffer.writed = 0;
	va_start(args, format);
	while (format && *format)
	{
		format = parse_before_arg(format, &buffer);
		if (*format == '%')
			format = parse_arg(format + 1, &buffer, args, &spec_errors);
	}
	va_end(args);
	writed = buffer_print(buffer);
	if (!format)
		return (-1);
	return (writed);
}
