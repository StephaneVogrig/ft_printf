/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:51:17 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 04:29:45 by svogrig          ###   ########.fr       */
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

void	convert_ull(unsigned long long n, t_spec *spec, t_buffer *buffer)
{
	char	str[LEN_MAXLONGLONG];
	int		len_str;
	int		len_precision;

	len_precision = 0;
	len_str = ull_to_str_dec(str, n);
	if (spec->precision > len_str)
		len_precision = spec->precision - len_str;
	if (is_set_field_right_zero(spec, len_str + len_precision))
		buffer_add_char(buffer, '0', spec->width - len_precision - len_str);
	if (is_set_field_right_nonzero(spec, len_str + len_precision))
		buffer_add_char(buffer, ' ', spec->width - len_precision - len_str);
	buffer_add_char(buffer, '0', len_precision);
	buffer_add_str(buffer, str + LEN_MAXLONGLONG - len_str, len_str);
	if (spec->width > (len_str + len_precision) && spec->flag_minus > 0)
		buffer_add_char(buffer, ' ', spec->width - len_precision - len_str);
}

void	convert_u(va_list args, t_spec *spec, t_buffer *buffer)
{
	unsigned long long	ull;
	
	ull = ull_from_arg(args, spec);
	convert_ull(ull, spec, buffer);
}

