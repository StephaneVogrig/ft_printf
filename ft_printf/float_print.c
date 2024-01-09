/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 05:03:45 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 14:23:41 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include "float.h"

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
	// printf("%i",str[j -1]);
		if (i == 64 - 1 || i == 64 - 12)
			str[j++] = ' ';
	}
	write(1, str, 66);
	if (c)
		write(1, &c, 1);
}
