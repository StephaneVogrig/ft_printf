/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_digit_ui32_tests.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:31:52 by stephane          #+#    #+#             */
/*   Updated: 2024/01/13 16:08:02 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

static void	print_test(t_ui32 n, int expected, int output, t_test *test)
{
	if (expected == output)
		printf("n = %10u : \033[32m%2i\033[0m | \033[32m%2i [OK]\r\033[0m", n, expected, output);
	else
		printf("n = %10u : \033[32m%2i\033[0m | \033[31m%2i [KO]\n\033[0m", n, expected, output);
	test->nbr++;
	test->success += expected == output;
	
}

void	nbr_digit_ui32_tests(void)
{
	int	i;
	t_ui32	n;
	t_ui32	m;
	t_test	test;
	
	test.success = 0;
	test.nbr = 0;
	print_test(0, 1, nbr_digit_ui32(0), &test);
	n = 1;
	i = 1;
	while (i < 11)
	{
		m = n - 1;
		if (m > 0)
			print_test(m, i - 1, nbr_digit_ui32(m), &test);
		print_test(n, i, nbr_digit_ui32(n), &test);
		i++;
		n *= 10;
	}
	print_test(UINT_MAX, 10, nbr_digit_ui32(UINT_MAX), &test);
	printf("                                                         \r");
	printf("%*s %3i / %3i tests passed\n", FIRST_FIELD_WIDTH, "len_b10_ui32", test.success, test.nbr);	
}