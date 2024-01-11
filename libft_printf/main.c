/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:03:12 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/10 13:46:45 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include "ft_printf.h"
#include "unit_test.h"

void	tests_char(void);
void	tests_d(void);
void	tests_field_width(void);
void	tests_field_width_etoile(void);
void	tests_flags(void);
void	tests_f(void);
void	tests_hi(void);
void	tests_i(void);
void	tests_il(void);
void	tests_ill(void);
void	tests_precision(void);
void	tests_precision_etoile(void);
void	tests_ptr(void);
void	tests_purcent(void);
void	tests_str(void);
void	tests_u(void);
void	tests_ul(void);
void	tests_ull(void);
void	tests_warning(void);
void	tests_x(void);
void	tests_X(void);
void	tests_spec_without_conversion(void);
void	double_to_float64_tests(void);

#include "essais.c"

int	main(void)
{
	// tests_char();
	// tests_d();
	tests_field_width();
	// tests_field_width_etoile();
	tests_flags();
	// tests_hi();
	// tests_i();
	// tests_il();
	// tests_ill();
	// tests_precision();
	// tests_precision_etoile();
	// tests_ptr();
	// tests_purcent();
	// tests_str();
	// tests_u();
	// tests_ul();
	// tests_ull();
	// tests_warning();
	// tests_x();
	// tests_X();
	// tests_f();
	// tests_spec_without_conversion();
	// double_to_float64_tests();

	// printf(" | %i\n", printf("k%"));
	// printf(" | %i\n", printf("%k%"));
	// printf("Fait planter printf : %*.*d\n", INT_MIN, 10 , 10);
	// printf("Fait pas planter printf : %*.*d\n", 10, INT_MIN , 10);

	// float f = 32e32;
	// double	d = 32e32;
	// long double	ld = 32e32;
	// printf("float = %f\n", f);
	// printf("double = %lf\n", d);
	// printf("long double = %Lf\n", ld);
}