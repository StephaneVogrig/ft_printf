/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_digit_ui8_tests.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 18:21:06 by stephane          #+#    #+#             */
/*   Updated: 2024/01/07 04:47:35 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "nbr_digit_unit_test.h"

static void	print_test(t_ui8 n, int expected, int output, t_test *test)
{
		if (expected == output)
			printf("n = %5u : \033[32m%i\033[0m | \033[32m%i [OK]\r\033[0m", n,  expected, output);
		else
			printf("n = %5u : \033[32m%i\033[0m | \033[31m%i [KO]\n\033[0m", n, expected, output);
	test->nbr++;
	test->success += expected == output;
}

void	nbr_digit_ui8_tests(void)
{
	int	i;
	t_ui8	n;
	t_ui8	m;
	t_test	test;
	
	test.success = 0;
	test.nbr = 0;
	print_test(0, 1, nbr_digit_ui8(0), &test);
	n = 1;
	i = 1;
	while (i < 4)
	{
		m = n - 1;
		if (m > 0)
			print_test(m, i - 1, nbr_digit_ui8(m), &test);
		print_test(n, i, nbr_digit_ui8(n), &test);
		i++;
		n *= 10;
	}
	print_test(UCHAR_MAX, 3, nbr_digit_ui8(UCHAR_MAX), &test);
	printf("                                                         \r");
	printf("%*s %3i / %3i tests passed\n",FIRST_FIELD_WIDTH, "len_b10_ui8", test.success, test.nbr);
}
