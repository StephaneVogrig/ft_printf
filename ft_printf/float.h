/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:13:52 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 15:39:06 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FLOAT_H
# define FLOAT_H

# include "vs_type.h"

# define POSITIVE 1
# define NEGATIVE -1
# define FLOAT_MAX_EXPONENT 1024

typedef	float 		t_float32;
typedef double		t_float64;
typedef long double	t_float128;

typedef	union u_float64{
	double	f;
	t_ui64	ui;
	struct {
		t_ui64 mantissa	: 52;
		t_ui64 exponent_biais : 11;
		t_ui64 sign	: 1;
	};
}	t_u_float64;

/* float64_get --------------------------------------------------------------*/
int			float64_get_sign(t_float64 f);
int			float64_get_exponent(t_float64 f);
t_ui64		float64_get_mantissa(t_float64 f);
t_float64	float64_get_decimal_part(t_float64 nbr);
t_float64	float64_get_integer_part(t_float64 nbr);

/* float64_set --------------------------------------------------------------*/
t_float64	float64_set_sign(t_float64 f, int sign);
t_float64	float64_set_exponent(t_float64 f, int exponent);
t_float64	float64_set_mantissa(t_float64 f, t_ui64 mantissa);

/* float64_print --------------------------------------------------------------*/
void	print_float64_to_binary(t_float64 nbr, char c);

#endif