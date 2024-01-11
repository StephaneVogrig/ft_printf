/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 23:13:52 by stephane          #+#    #+#             */
/*   Updated: 2024/01/10 22:51:26 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FLOAT_H
# define FLOAT_H

# include "vs_type.h"

# define POSITIVE 1
# define NEGATIVE -1

# define FLOAT_MAX_EXPONENT 1024

# define FLOAT32_MAX 3.40282346e38
# define FLOAT32_MIN -3.40282346e38

# define FLOAT64_MAX 1.7976931348623157e308
# define FLOAT64_MIN -1.7976931348623157e308

# define FLOAT32_CLOSE_ZERO_POSITIVE 1.4e-45
# define FLOAT32_CLOSE_ZERO_NEGATIVE -1.4e-45

# define FLOAT64_CLOSE_ZERO_POSITIVE 4.9406564584124654e-324
# define FLOAT64_CLOSE_ZERO_NEGATIVE -4.9406564584124654e-324

typedef	union u_float64{
	double	f;
	t_ui64	ui;
	struct {
		t_ui64 mantissa	: 52;
		t_ui64 exponent_biais : 11;
		t_ui64 sign	: 1;
	};
}	t_u_float64;

typedef struct s_round {
	t_ui32	nbr_digit : 16;
	t_ui32	intpart : 1;
	t_ui32	decpart : 1;
}	t_round;

/* float64_get ---------------------------------------------------------------*/
int			float64_get_sign(t_float64 f);
int			float64_get_exponent(t_float64 f);
t_ui64		float64_get_mantissa(t_float64 f);
t_float64	float64_get_decimal_part(t_float64 nbr);
t_float64	float64_get_integer_part(t_float64 nbr);

/* float64_set ---------------------------------------------------------------*/
t_float64	float64_set_sign(t_float64 f, int sign);
t_float64	float64_set_exponent(t_float64 f, int exponent);
t_float64	float64_set_mantissa(t_float64 f, t_ui64 mantissa);

#endif