/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:32:22 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 10:00:56 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "float.h"
#include <stdio.h>

t_float128	vs_pow(int p)
{
	t_float128 result;
// printf("p %i\n", p);
	
	result = 10.0;
	if (p == 0)
		return (1);
	while (--p)
		result *= 10.0;
// printf("result %Lf, p %i\n", result, p);
	return (result);
}
