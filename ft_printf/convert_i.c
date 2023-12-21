/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_i.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:50:55 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 04:07:48 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_i(va_list args, t_spec *spec, t_buffer *buffer)
{
	long long	ll;
	int			sign;
	char		str[LEN_MAXLONGLONG];
	int			len;

	sign = 1;
	if(spec->length[0] == 'l' && spec->length[1] == 'l')
		ll = va_arg(args, long long);
	else if(spec->length[0] == 'l')
		ll = (long long)va_arg(args, long);
	else
		ll = (long long)va_arg(args, int);
	if (ll < 0)
		sign = -1;
	len = ull_to_str_dec(str, ll);
	buffer_add_str(buffer, str, len);
}
/*
ssize_t print_ll(long long n)
{
	if (n == LLONG_MAX)
		return (write(1, "-9223372036854775808", 20));
	if (n < 0)
		return(write(1, "-", 1) + print_ull(-n));
	return (print_ull(n));
}
*/
