/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_ll.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:00:53 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/28 18:13:24 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

unsigned long long	arg_to_ull(va_list args, t_spec *spec)
{
	if (spec->length[0] == 'l')
	{
		if (spec->length[1] == 'l')
			return (va_arg(args, unsigned long long));
		return ((unsigned long long)va_arg(args, unsigned long));
	}
	return ((unsigned long long)va_arg(args, unsigned int));
}

long long	arg_to_ll(va_list args, t_spec *spec)
{
	int	arg;
	if (spec->length[0] == 'l')
	{
		if (spec->length[1] == 'l')
			return (va_arg(args, long long));
		return ((long long)va_arg(args, long));
	}
	arg = va_arg(args, int);
	if (arg == INT_MIN)
		return (INT_MIN);
	if (arg < 0)
		return (-(long long)(-arg));
	return ((long long)arg);
}
