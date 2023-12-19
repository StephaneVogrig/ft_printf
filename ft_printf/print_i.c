/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:28:01 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/18 20:22:06 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	print_i(int	n)
{
	long long ll;

	ll = n;
	if (n < 0)
		return(write(1, "-", 1) + print_ull(-ll));
	return (print_ull(n));
}