/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:20:44 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/18 22:30:00 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	print_p(void *p)
{
	if (!p)
		return(write(1, "(nil)", 5));
	return (write(1, "0x", 2) + print_ullx((unsigned long long)p));
}
