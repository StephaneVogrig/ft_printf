/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:03:12 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/02 18:57:55 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"
#include <stdio.h>

void	tests_char(void);
void	tests_d(void);
void	tests_field_width(void);
void	tests_flags(void);
void	tests_f(void);
void	tests_hi(void);
void	tests_i(void);
void	tests_il(void);
void	tests_ill(void);
void	tests_precision(void);
void	tests_ptr(void);
void	tests_purcent(void);
void	tests_str(void);
void	tests_u(void);
void	tests_ul(void);
void	tests_ull(void);
void	tests_warning(void);
void	tests_x(void);
void	tests_X(void);

int	main(void)
{
	// tests_char();
	// tests_d();
	// tests_field_width();
	// tests_flags();
	// tests_hi();
	// tests_i();
	// tests_il();
	// tests_ill();
	// tests_precision();
	// tests_ptr();
	// tests_purcent();
	// tests_str();
	// tests_u();
	// tests_ul();
	// tests_ull();
	// tests_warning();
	// tests_x();
	// tests_X();
	tests_f();


	// printf("Fait planter printf : %*.*d\n", INT_MIN, 10 , 10);
	// printf("Fait pas planter printf : %*.*d\n", 10, INT_MIN , 10);

	printf("sizeof(float) = %lu\n", sizeof(float));
	printf("sizeof(double) = %lu\n", sizeof(double));
	printf("sizeof(long double) = %lu\n", sizeof(long double));
	// float f = 32e32;
	// double	d = 32e32;
	// long double	ld = 32e32;
	// printf("float = %f\n", f);
	// printf("double = %lf\n", d);
	// printf("long double = %Lf\n", ld);
}