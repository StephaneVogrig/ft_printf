/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float64_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:11:22 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 17:13:09 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "float.h"

t_float64	float64_set_exponent(t_float64 f, int exponent)
{
	t_u_float64	uf;

	uf.f = f;
	if (exponent > 1023 || exponent < -1022)
		uf.exponent_biais = 1023;
	uf.exponent_biais = exponent + 1023;
	return (uf.f);	
}

t_float64	float64_set_mantissa(t_float64 f, t_ui64 mantissa)
{
	t_u_float64	uf;

	uf.f = f;
	if (mantissa > 4503599627370495)
		mantissa = 4503599627370495;
	uf.mantissa = mantissa;
	return (uf.f);	
}