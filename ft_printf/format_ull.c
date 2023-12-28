/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_ull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:38:17 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/27 21:26:12 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

void	format_ull_add_ox(t_spec *spec, t_buffer *buffer)
{
	if (spec->flag_hash && spec->conversion == 'x')
		buffer_add_str(buffer, "0x", 2);
	if (spec->flag_hash && spec->conversion == 'X')
		buffer_add_str(buffer, "0X", 2);
}

void	format_ull(t_spec *spec, t_buffer *buffer, char *str, int len_nbr)
{
	int	len_precision;
	int	len_ox;
	int	len_occuped;

	len_ox = 0;
	if (is_set_hexa_hash(spec))
		len_ox = 2;
	len_precision = 0;
	if (spec->precision == 0 && str[LEN_MAXLONGLONG - 1] == '0')
		len_nbr = 0;
	if (spec->precision > len_nbr)
		len_precision = spec->precision - len_nbr;
	len_occuped = len_nbr + len_precision + len_ox;
	if (is_set_field_right_nonzero(spec, len_occuped))
		buffer_add_char(buffer, ' ', spec->width - len_occuped);
	format_ull_add_ox(spec, buffer);
	if (is_set_field_right_zero(spec, len_occuped))
		buffer_add_char(buffer, '0', spec->width - len_occuped);
	buffer_add_char(buffer, '0', len_precision);
	buffer_add_str(buffer, str + LEN_MAXLONGLONG - len_nbr, len_nbr);
	if (spec->width > len_occuped && spec->flag_minus)
		buffer_add_char(buffer, ' ', spec->width - len_occuped);
}
