/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float64_get_decimal_part_tests.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 22:20:55 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/14 14:02:01 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

static void	print_test(t_float64 n, t_float64 expected, t_test *test)
{
	t_float64	output;

	output = float64_get_decimal_part(n);
	if (expected == output)
		printf("n = %.10f : \033[32m%.20f\033[0m | \033[32m%.20f [OK]\r\033[0m", n,  expected, output);
	else
		printf("n = %.10f : \033[32m%.20f\033[0m | \033[31m%.20f [KO]\n\033[0m", n, expected, output);
	test->nbr++;
	test->success += expected == output;
}
#include "float_print.c"

void	float64_get_decimal_part_tests(void)
{
	t_test	test;
	
	test.success = 0;
	test.nbr = 0;

	print_test(0.0, 0.0, &test);
	print_test(0.1, 0.1, &test);
	print_test(0.2, 0.2, &test);
	print_test(0.3, 0.3, &test);
	print_test(0.4, 0.4, &test);
	print_test(0.5, 0.5, &test);
	print_test(0.6, 0.6, &test);
	print_test(0.7, 0.7, &test);
	print_test(0.8, 0.8, &test);
	print_test(0.9, 0.9, &test);

	// print_test(0.00000001, 0.00000001, &test);
	// print_test(0.00000002, 0.00000002, &test);
	// print_test(0.00000003, 0.00000003, &test);
	// print_test(0.00000004, 0.00000004, &test);
	// print_test(0.00000005, 0.00000005, &test);
	// print_test(0.00000006, 0.00000006, &test);
	// print_test(0.00000007, 0.00000007, &test);
	// print_test(0.00000008, 0.00000008, &test);
	// print_test(0.00000009, 0.00000009, &test);

	// print_test(1.0, 0.0, &test);
	// print_test(1.1, 1.1 - 1, &test);
	// print_test(1.2, 1.2 - 1, &test);
	// print_test(1.3, 1.3 - 1, &test);
	// print_test(1.4, 1.4 - 1, &test);
	// print_test(1.5, 1.5 - 1, &test);
	// print_test(1.6, 1.6 - 1, &test);
	// print_test(1.7, 1.7 - 1, &test);
	// print_test(1.8, 1.8 - 1, &test);
	// print_test(1.9, 1.9 - 1, &test);

	// print_test(1000.1, 1000.1 - 1000, &test);
	// print_test(1000.2, 1000.2 - 1000, &test);
	// print_test(1000.3, 1000.3 - 1000, &test);
	// print_test(1000.4, 1000.4 - 1000, &test);
	// print_test(1000.5, 1000.5 - 1000, &test);
	// print_test(1000.6, 1000.6 - 1000, &test);
	// print_test(1000.7, 1000.7 - 1000, &test);
	// print_test(1000.8, 1000.8 - 1000, &test);
	// print_test(1000.9, 1000.9 - 1000, &test);
	
	// print_test(1000000000000000019859928776704.0, 0, &test);
	// print_float64_to_binary(1000000000000000000000000000000.0,'\n');
	// print_test(1000000000000000000000000000000.0, 0, &test);

	printf("%80s\r","");
	printf("%*s %3i / %3i tests passed\n",FIRST_FIELD_WIDTH, "float64_get_decimal_part", test.success, test.nbr);
}
