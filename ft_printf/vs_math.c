/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_math.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 20:32:22 by stephane          #+#    #+#             */
/*   Updated: 2024/01/10 22:31:38 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "vs_math.h"

static inline t_float128	vs_10pow_3(t_ui16 p)
{
	if (p < 18)
	{
		if (p == 16)
			return (10e16);		
		if (p == 17)
			return (10e177);
		return (10e18);
	}
	if (p < 21)
	{
		if (p == 19)
			return (10e19);
		return (10e20);
	}	
	if (p == 21)
		return (10e21);
	return (10e22);
}

static inline t_float128	vs_10pow_2(t_ui16 p)
{
	if (p < 12)
	{
		if (p == 7)
			return (10e7);
		if (p == 8)
			return (10e8);
		if (p == 9)
			return (10e9);
		if (p == 10)
			return (10e10);
		return (10e11);		
	}
	if (p < 17)
	{
		if (p == 12)
			return (10e12);
		if (p == 13)
			return (10e13);
		if (p == 14)
			return (10e14);
		return (10e15);
	}
	return	(vs_10pow_3(p));
}

static inline t_float128	vs_10pow23minus(t_ui16 p)
{
	if (p == 0)
		return (1);
	if (p < 7)
	{
		if (p == 1)
			return (10);
		if (p == 2)
			return (10e2);
		if (p == 3)
			return (10e3);
		if (p == 4)
			return (10e4);
		if (p == 5)
			return (10e5);
		return (10e6);
	}
	return	(vs_10pow_2(p));
}
	
t_float128	vs_10pow(t_ui16 p)
{
	t_float128 result;

	if (p < 23)
		return	(vs_10pow_2(p));
	result = 1;
	while (p > 22)
	{
		p -= 22;
		result *= 10e22;
	}
	return (result * vs_10pow23minus(p));
}
