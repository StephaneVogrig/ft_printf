/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float64_get_exponent_part_tests.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 04:19:44 by stephane          #+#    #+#             */
/*   Updated: 2024/01/13 16:17:28 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

static void	print_test(t_float64 n, int expected, int output, t_test *test)
{
	if (expected == output)
		printf("n = %e : \033[32m%i\033[0m | \033[32m%i [OK]\r\033[0m", n,  expected, output);
	else
		printf("n = %e : \033[32m%i\033[0m | \033[31m%i [KO]\n\033[0m", n, expected, output);
	test->nbr++;
	test->success += expected == output;
}

void	float64_get_exponent_tests(void)
{
	t_test	test;
	
	test.success = 0;
	test.nbr = 0;

	print_test(0.0, 0, float64_get_exponent(0.0), &test);
	print_test(2047, 10, float64_get_exponent(2047), &test);
	print_test(-2047, 10, float64_get_exponent(-2047), &test);
	print_test(4503599627370495, 51, float64_get_exponent(4503599627370495), &test);
	print_test(1.7976931348623157e308, 1023, float64_get_exponent(1.7976931348623157e308), &test);
	print_test(2.2250738585072014e-308, -1022, float64_get_exponent(2.2250738585072014e-308), &test);
	print_test(1.7976931348623157e308 *10, 1024, float64_get_exponent(1.7976931348623157e308 *10), &test);
	print_test(1.7976931348623157e308 *100, 1024, float64_get_exponent(1.7976931348623157e308 *10), &test);
	print_test(-1.7976931348623157e308, 1023, float64_get_exponent(-1.7976931348623157e308), &test);
	print_test(-2.2250738585072014e-308, -1022, float64_get_exponent(-2.2250738585072014e-308), &test);
	print_test(-1.7976931348623157e308 *10, 1024, float64_get_exponent(1.7976931348623157e308 *10), &test);
	print_test(-1.7976931348623157e308 *100, 1024, float64_get_exponent(1.7976931348623157e308 *10), &test);
	print_test(4.9406564584124654e-324, -1022, float64_get_exponent(4.9406564584124654e-324), &test);
	print_test(4.9406564584124654e-324 / 100, 0, float64_get_exponent(4.9406564584124654e-324/ 100), &test);
	print_test(-4.9406564584124654e-324, -1022, float64_get_exponent(4.9406564584124654e-324), &test);
	print_test(-4.9406564584124654e-324 / 100, 0, float64_get_exponent(4.9406564584124654e-324/ 100), &test);
		
	printf("                                                         \r");
	printf("%*s %3i / %3i tests passed\n",FIRST_FIELD_WIDTH, "float64_get_exponent", test.success, test.nbr);
	
	
}