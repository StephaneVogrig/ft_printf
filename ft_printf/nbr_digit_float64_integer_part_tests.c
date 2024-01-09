/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_digit_float64_integer_part_tests.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:21:36 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 23:15:25 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "nbr_digit_unit_test.h"

static void	print_test(t_float64 n, int expected, int output, t_test *test)
{
		if (expected == output)
			printf("n = %.20e : \033[32m%i\033[0m | \033[32m%i [OK]\n\033[0m", n,  expected, output);
		else
			printf("n = %.20e : \033[32m%i\033[0m | \033[31m%i [KO]\n\033[0m", n, expected, output);
	test->nbr++;
	test->success += expected == output;
}

void	nbr_digit_float64_integer_part_tests(void)
{
	int	i;
	int	n;
	t_float64	m;
	t_test	test;
	
	n = 0;
	m = 1;
	test.success = 0;
	test.nbr = 0;
	while (n < 308)
	{
		
		print_test(m , n + 1, nbr_digit_float64_integer_part(m), &test);

		m *= 10;
		n++;
		
	}
		
	// 	print_test(0, 1, nbr_digit_float64_integer_part(0), &test);
	// print_test(10000, 5, nbr_digit_float64_integer_part(10000), &test);
	// print_test(1e19, 20, nbr_digit_float64_integer_part(1e19), &test);
	// print_test(1e40, 301, nbr_digit_float64_integer_part(1e40), &test);
	// print_test(1e150, 301, nbr_digit_float64_integer_part(1e150), &test);
	// print_test(1e300, 301, nbr_digit_float64_integer_part(1e300), &test);
	
	print_test(UCHAR_MAX, 3, nbr_digit_ui8(UCHAR_MAX), &test);
	printf("                                                         \r");
	printf("%*s %3i / %3i tests passed\n",FIRST_FIELD_WIDTH, "len_b10_ui8", test.success, test.nbr);
}

int	main(void)
{
	nbr_digit_float64_integer_part_tests();
}