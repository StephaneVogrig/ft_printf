/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:03:12 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/13 15:39:31 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	main(void)
{
	tests_char();
	tests_d();
	tests_field_width();
	tests_field_width_etoile();
	tests_flags();
	tests_hi();
	tests_i();
	tests_il();
	tests_ill();
	tests_precision();
	tests_precision_etoile();
	tests_ptr();
	tests_purcent();
	tests_str();
	tests_u();
	tests_ul();
	tests_ull();
	tests_warning();
	tests_x();
	tests_X();
	tests_f();
	tests_spec_without_conversion();


	float f = 32e32;
	double	d = 32e32;
	long double	ld = 32e32;
	printf("float = %f\n", f);
	printf("double = %lf\n", d);
	printf("long double = %Lf\n", ld);
}