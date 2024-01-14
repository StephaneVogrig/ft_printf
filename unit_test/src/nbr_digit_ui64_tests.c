/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_digit_ui64_tests.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 15:45:33 by stephane          #+#    #+#             */
/*   Updated: 2024/01/13 22:25:40 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

static void	print_test(t_ui64 n, int expected, int output, t_test *test)
{
	if (expected == output)
		printf("n = %20lu : \033[32m%3i\033[0m | \033[32m%3i [OK]\r\033[0m", n, expected, output);
	else
		printf("n = %20lu : \033[32m%3i\033[0m | \033[31m%3i [KO]\n\033[0m", n, expected, output);
	test->nbr++;
	test->success += expected == output;
}

void	nbr_digit_ui64_tests(void)
{
	int	i;
	t_ui64	n;
	t_ui64	m;
	t_test	test;
	
	test.success = 0;
	test.nbr = 0;
	print_test(0, 1, nbr_digit_ui64(0), &test);
	
	n = 1;
	i = 1;
	while (i < 21)
	{
		m = n - 1;
		if (m > 0)
			print_test(m, i - 1, nbr_digit_ui64(m), &test);
		print_test(n, i, nbr_digit_ui64(n), &test);
		i++;
		n *= 10;
	}
	print_test(ULLONG_MAX, 20, nbr_digit_ui64(ULLONG_MAX), &test);
	printf("                                                         \r");
	printf("%*s %3i / %3i tests passed\n", FIRST_FIELD_WIDTH, "len_b10_ui64", test.success, test.nbr);
}