/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 05:42:33 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 06:02:42 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_set_field_right_zero(t_spec *spec, int len_occuped)
{
	if (!spec->flag_zero)
		return (0);
	if (spec->flag_minus)
		return (0);
	if (spec->width <= len_occuped)
		return (0);
	return (1);
}

int	is_set_field_right_nonzero(t_spec *spec, int len_occuped)
{
	if (spec->flag_zero)
		return (0);
	if (spec->flag_minus)
		return (0);
	if (spec->width <= len_occuped)
		return (0);
	return (1);
}

int	is_set_hexa_hash(t_spec *spec)
{
	if (!spec->flag_hash)
		return (0);
	if (spec->conversion != 'x' && spec->conversion != 'X')
		return (0);
	return (1);
}

void	format_ull(t_spec *spec, t_buffer *buffer, char *str, int len_str)
{
	int	len_precision;
	int	len_ox;
	int	len_occuped;

	len_ox = 0;
	if (is_set_hexa_hash(spec))
		len_ox = 2;
	len_precision = 0;
	if (spec->precision > len_str)
		len_precision = spec->precision - len_str;
	len_occuped = len_str + len_precision + len_ox;
	if (is_set_field_right_nonzero(spec, len_occuped))
		buffer_add_char(buffer, ' ', spec->width - len_occuped);
	if (spec->flag_hash && spec->conversion == 'x')
		buffer_add_str(buffer, "0x", 2);
	if (spec->flag_hash && spec->conversion == 'X')
		buffer_add_str(buffer, "0X", 2);
	if (is_set_field_right_zero(spec, len_occuped))
		buffer_add_char(buffer, '0', spec->width - len_occuped);
	buffer_add_char(buffer, '0', len_precision);
	buffer_add_str(buffer, str + LEN_MAXLONGLONG - len_str, len_str);
	if (spec->width > (len_str + len_precision) && spec->flag_minus > 0)
		buffer_add_char(buffer, ' ', spec->width - len_occuped);
}
