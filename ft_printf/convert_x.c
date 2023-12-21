/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:49:34 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 04:08:11 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_x(va_list args, t_spec *spec, t_buffer *buffer)
{
	char	str[LEN_MAXLONGLONG];
	int		len_str;
	int		len_precision;
	unsigned long long	ull;

	ull = ull_from_arg(args, spec);
	
	len_precision = 0;
	if (spec->conversion == 'X')
		len_str = ull_to_str_hexaupper(str, ull);
	else
		len_str = ull_to_str_hexalower(str, ull);
		
	if (spec->precision > -1 && spec->precision > len_str)
		len_precision = spec->precision - len_str;
	buffer_add_char(buffer, '0', len_precision);
	buffer_add_str(buffer, str, len_str);
}
