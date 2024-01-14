/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_digit_float64_integer_part_tests.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:21:36 by stephane          #+#    #+#             */
/*   Updated: 2024/01/14 13:59:32 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

static void	print_test(t_float64 n, int expected, t_test *test)
{
	int	output = nbr_digit_float64_integer_part(n);
	if (expected == output)
		printf("n = %.20e : \033[32m%i\033[0m | \033[32m%i [OK]\r\033[0m", n,  expected, output);
	else
		printf("n = %.20e : \033[32m%i\033[0m | \033[31m%i [KO]\n\033[0m", n, expected, output);
	test->nbr++;
	test->success += expected == output;
}

void	nbr_digit_float64_integer_part_tests(void)
{
	int	n;
	t_float64	m;
	t_test	test;
	
	// print_test(0, 1, &test);
	// print_test(10, 2, &test);
	// print_test(100, 3, &test);
	// print_test(1e3, 4, &test);
	// print_test(1e4, 5, &test);
	// print_test(1e5, 6, &test);
	// print_test(1e6, 7, &test);
	// print_test(1e7, 8, &test);
	// print_test(1e8, 9, &test);
	// print_test(1e9, 10, &test);
	// print_test(1e10, 11, &test);
	// print_test(1e11, 12, &test);
	// print_test(1e12, 13, &test);
	// print_test(1e13, 14, &test);
	// print_test(1e14, 15, &test);
	// print_test(1e15, 16, &test);
	// print_test(1e16, 17, &test);
	// print_test(1e17, 18, &test);
	// print_test(1e18, 19, &test);
	// print_test(1e19, 20, &test);
	// print_test(1e20, 21, &test);
	// print_test(1e21, 22, &test);
	// print_test(1e22, 23, &test);
	// print_test(1e23, 23, &test);
	// print_test(1.0000000000000000000000000000001e23, 0, &test);
	// print_test(1.0000000000000001e24, 0, &test);
	// print_test(1.0000000000000000000000000000001e25, 0, &test);
	// print_test(1.0000000000000000000000000000001e26, 0, &test);
	// print_test(1.0000000000000000000000000000001e27, 0, &test);
	// print_test(1.0000000000000000000000000000001e28, 0, &test);
	// print_test(1.0000000000000000000000000000001e29, 0, &test);
	n = 0;
	m = 1;
	test.success = 0;
	test.nbr = 0;
	while (n < 23)
	{
		print_test(m , n + 1, &test);
		m *= 10;
		n++;
	}
	
	while (n < 47)
	{
		print_test(m , n, &test);
		m *= 10;
		n++;
	}

	while (n < 51)
	{
		print_test(m , n + 1, &test);
		m *= 10;
		n++;
	}

	while (n < 54)
	{
		print_test(m , n, &test);
		m *= 10;
		n++;
	}

	while (n < 233)
	{
		print_test(m , n + 1, &test);
		m *= 10;
		n++;
	}

	while (n < 234)
	{
		print_test(m , n, &test);
		m *= 10;
		n++;
	}
	while (n < 255)
	{
		print_test(m , n + 1, &test);
		m *= 10;
		n++;
	}

	while (n < 256)
	{
		print_test(m , n, &test);
		m *= 10;
		n++;
	}
	while (n < 304)
	{
		print_test(m , n + 1, &test);
		m *= 10;
		n++;
	}

	while (n < 309)
	{
		print_test(m , n, &test);
		m *= 10;
		n++;
	}

	print_test(UCHAR_MAX, 3, &test);
	printf("                                                         \r");
	printf("%*s %3i / %3i tests passed\n",FIRST_FIELD_WIDTH, "nbr_digit_float64_integer_part", test.success, test.nbr);
}
