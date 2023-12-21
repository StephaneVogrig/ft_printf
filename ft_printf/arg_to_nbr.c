/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ull_from_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 00:35:22 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 07:08:39 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long long	ull_from_arg(va_list args, t_spec *spec)
{
	unsigned long long	ull;

	if(spec->length[0] == 'l' && spec->length[1] == 'l')
		ull = va_arg(args, unsigned long long);
	else if(spec->length[0] == 'l')
		ull = (unsigned long long)va_arg(args, unsigned long);
	else
		ull = (unsigned long long)va_arg(args, unsigned int);
	return (ull);
}

long long	ll_from_arg(va_list args, t_spec *spec)
{
	long long	ll;
	int			temp;

	if(spec->length[0] == 'l' && spec->length[1] == 'l')
		ll = va_arg(args, unsigned long long);
	else if(spec->length[0] == 'l')
		ll = (unsigned long long)va_arg(args, unsigned long);
	else
	{	
		temp = va_arg(args, unsigned int);
		if (temp == INT_MIN)
			ll = INT_MIN;
		else if (temp < 0)
			ll = -(unsigned long long)(-temp);
		else
			ll = (unsigned long long)temp;
	}
	return (ll);
}
