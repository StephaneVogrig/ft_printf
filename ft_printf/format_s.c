/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:44:21 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 12:18:58 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_s(char *str, t_spec *spec, t_buffer *buffer)
{
	size_t	len;

	if (!str)
	{
		str = "(null)";
		if (spec->precision > -1 && spec->precision < 6)
			str = "";
	}
	len = ft_strlen(str);
	if (spec->precision > -1 && len > (size_t)spec->precision)
		len = spec->precision;
	if (spec->width > -1 && len < (size_t)spec->width && !spec->flag_minus)
		buffer_add_char(buffer, ' ', spec->width - len);
	buffer_add_str(buffer, str, len);
	if (spec->width > -1 && len < (size_t)spec->width && spec->flag_minus)
		buffer_add_char(buffer, ' ', spec->width - len);
}
