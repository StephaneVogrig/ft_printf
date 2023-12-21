/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:50:55 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 06:43:29 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_i(va_list args, t_spec *spec, t_buffer *buffer)
{
	long long	ll;
	char		str[LEN_MAXLONGLONG];
	int			len_nbr;
	
	str[0] = '+';
	ll = ll_from_arg(args, spec);
	if (ll == LLONG_MIN)
		format_ll(spec, buffer, "-9223372036854775808", 19);
	else
	{
		if (ll < 0)
		{
			str[0] = '-';
			ll *= -1;
		}
		len_nbr = ull_to_str_dec(str, ll);
		format_ll(spec, buffer, str, len_nbr);
	}
}
