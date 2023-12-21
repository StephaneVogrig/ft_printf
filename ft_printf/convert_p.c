/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:20:44 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 04:07:56 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_p(void *p, t_spec *spec, t_buffer *buffer)
{
	char	str[LEN_MAXLONGLONG];
	int		len_str;
	int		len_precision;
	unsigned long long	ull;

	if (!p)
	{
		ft_memcpy(str, "(nil)", 5);
		len_str = 5;
	}
	else
	{
		ull = (unsigned long long)p;
		len_str = ull_to_str_hexalower(str, ull);
	}
	len_precision = 0;
		
	if (spec->precision > -1 && spec->precision > len_str)
		len_precision = spec->precision - len_str;
	buffer_add_char(buffer, '0', len_precision);
	buffer_add_str(buffer, str, len_str);
}
