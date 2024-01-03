/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:44:21 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/03 06:34:27 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	format_s(char *str, t_spec *spec, t_buffer *buffer)
{
	size_t	len;

	if (!str && spec->precision > -1 && spec->precision < 6)
		str = "";
	else if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (spec->precision > -1 && len > (size_t)spec->precision)
		len = spec->precision;
	if (spec->width > -1 && len < (size_t)spec->width && !spec->flag_minus)
		buffer_add_char(buffer, ' ', spec->width - len);
	buffer_add_str(buffer, str, len);
	if (spec->width > -1 && len < (size_t)spec->width && spec->flag_minus)
		buffer_add_char(buffer, ' ', spec->width - len);
	return (1);
}
