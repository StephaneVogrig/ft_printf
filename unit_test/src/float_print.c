/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 05:03:45 by stephane          #+#    #+#             */
/*   Updated: 2024/01/14 00:48:00 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "float.h"

// print a float number in binary format with char c at the end.
// sign, exponant and mantissa are separated with space.
void	print_float64_to_binary(t_float64 nbr, char c)
{
	int			i;
	int			j;
	char 		str[66];
	t_u_float64	uf;

	uf.f = nbr;
	i = 64;
	j = 0;
	while (i--)
	{
		str[j] = (char)(uf.ui >> i) & 0x00000001;
		str[j++] += '0';
		if (i == 64 - 1 || i == 64 - 12)
			str[j++] = ' ';
	}
	write(1, str, 66);
	if (c)
		write(1, &c, 1);
}
