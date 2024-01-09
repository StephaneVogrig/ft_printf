/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float64_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:11:42 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 11:54:14 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "float.h"
#include <stdio.h>

int	float64_get_sign(t_float64 nbr)
{
	t_u_float64	uf;

	uf.f = nbr;
	
	if (uf.sign)
		return (-1);
	return (1);	
}

int	float64_get_exponent(t_float64 nbr)
{
	t_u_float64	uf;

	if (nbr == 0.0)
		return (0);
	uf.f = nbr;
	if (uf.exponent_biais ==  0)
		return ((int)uf.exponent_biais - 1022);
	return ((int)uf.exponent_biais - 1023);	
}

t_ui64	float64_get_mantissa(t_float64 f)
{
	t_u_float64	uf;

	uf.f = f;
	return ((t_ui64)uf.mantissa);	
}

t_float64	float64_get_decimal_part(t_float64 nbr)
{
	int			exp;
	t_u_float64	uf;

	exp = float64_get_exponent(nbr);
	if (exp < 0)
		return (nbr);
	if (exp == 0)
		return (nbr - (t_ui64)nbr);
	uf.f = nbr;
	uf.exponent_biais -= exp;
	uf.mantissa <<= exp;
	uf.f -= 1;
	return (uf.f);
}

t_float64	float64_get_integer_part(t_float64 nbr)
{
	int			exp;
	t_u_float64	uf;

	exp = float64_get_exponent(nbr);
	
// printf("nbr %f, exposant %i\n", nbr, exp);
// print_float64_to_binary(nbr, '\n');
	if (exp < 0)
		return (0.0);
	if (exp == 0)
		return (nbr - (int)nbr);
	if (exp > 51)
		return (nbr);
	uf.f = nbr;
	uf.mantissa >>= 51 - exp;
	uf.mantissa <<= 51 - exp;
// print_float64_to_binary(uf.f, '\n');
	return (nbr);	
}
