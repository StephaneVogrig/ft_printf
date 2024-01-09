/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:44:21 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/07 10:09:07 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	format_s_float(char *str, t_spec *spec, t_buffer *buffer)
{
	spec->width -= 3;
	if (spec->prefix)
		spec->width--;
	if (spec->width < 0)
		spec->width = 0;
	if (spec->right_align && spec->width)
		buffer_add_char(buffer, ' ', (size_t)spec->width);
	if (spec->prefix)
		buffer_add_char(buffer, spec->prefix, 1);
	buffer_add_str(buffer, str, 3);
	if (spec->left_align && spec->width)
		buffer_add_char(buffer, ' ', spec->width);
	return (1);
}

int	format_s_only_width(char *str, t_spec *spec, t_buffer *buffer)
{
	size_t	len;

	if (spec->width == - 1)
		spec->width = 0;
	len = ft_strlen(str);
	if (spec->right_align && (size_t)spec->width > len)
		buffer_add_char(buffer, ' ', (size_t)spec->width - len);
	buffer_add_str(buffer, str, len);
	if (spec->left_align && (size_t)spec->width > len)
		buffer_add_char(buffer, ' ', (size_t)spec->width - len);
	return (1);
}

int	format_s(char *str, t_spec *spec, t_buffer *buffer)
{
	size_t	len;

	if (spec->width == - 1)
		spec->width = 0;
	if (!str && spec->precision > -1 && spec->precision < 6)
		str = "";
	else if (!str)
		str = "(null)";
	len = ft_strlen(str);
	if (spec->precision > -1 && len > (size_t)spec->precision)
		len = spec->precision;
	if (spec->right_align && (size_t)spec->width > len)
		buffer_add_char(buffer, ' ', spec->width - len);
	buffer_add_str(buffer, str, len);
	if (spec->left_align && (size_t)spec->width > len)
		buffer_add_char(buffer, ' ', spec->width - len);
	return (1);
}
