/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float64_get_integer_part_tests.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 03:23:36 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 15:08:40 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "float_tests.h"

static void	print_test(t_float64 n, t_float64 expected, t_float64 output, t_test *test)
{
		if (expected == output)
			printf("n = %f : \033[32m%f\033[0m | \033[32m%f [OK]\n\033[0m", n,  expected, output);
		else
			printf("n = %f : \033[32m%f\033[0m | \033[31m%f [KO]\n\033[0m", n, expected, output);
	test->nbr++;
	test->success += expected == output;
}

void	float_get_integer_part_tests(void)
{
	int	i;
	t_test	test;
	
	test.success = 0;
	test.nbr = 0;
	print_test(0.0, 0.0, float64_get_integer_part(0.0), &test);
	print_test(0.25, 0.0, float64_get_integer_part(0.25), &test);
	print_test(-42.42, 1.0, float64_get_integer_part(-42.42), &test);
	print_test(1.1, 1.0, float64_get_integer_part(1.1), &test);
	print_test(10.1, 10.0, float64_get_integer_part(10.1), &test);
	
	
	printf("                                                         \r");
	printf("%*s %3i / %3i tests passed\n",FIRST_FIELD_WIDTH, "float64_get_integer_part", test.success, test.nbr);
	
}
