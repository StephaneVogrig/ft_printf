/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_ll.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:01:37 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/22 00:31:17 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_ll_add_sign(t_spec *spec, t_buffer *buffer, char *str)
{
	if (str[0] == '-')
		buffer_add_str(buffer, "-", 1);
	if (spec->flag_space && str[0] == '+')
		buffer_add_str(buffer, " ", 1);
	if (spec->flag_plus && str[0] == '+')
		buffer_add_str(buffer, "+", 1);
}

void	format_ll(t_spec *spec, t_buffer *buffer, char *str, int len_nbr)
{
	int	len_precision;
	int	len_sign;
	int	len_occuped;

	len_sign = 0;
	if (str[0] == '-' || spec->flag_plus)
		len_sign = 1;
	len_precision = 0;
	if (spec->precision == 0 && str[LEN_MAXLONGLONG - 1] == '0')
		len_nbr = 0;
	if (spec->precision > len_nbr)
		len_precision = spec->precision - len_nbr;
	len_occuped = len_nbr + len_precision + len_sign;
	if (is_set_field_right_nonzero(spec, len_occuped))
		buffer_add_char(buffer, ' ', spec->width - len_occuped);
	format_ll_add_sign(spec, buffer, str);
	if (is_set_field_right_zero(spec, len_occuped))
		buffer_add_char(buffer, '0', spec->width - len_occuped);
	buffer_add_char(buffer, '0', len_precision);
	buffer_add_str(buffer, str + LEN_MAXLONGLONG - len_nbr, len_nbr);
	if (spec->width > len_occuped && spec->flag_minus)
		buffer_add_char(buffer, ' ', spec->width - len_occuped);
}
