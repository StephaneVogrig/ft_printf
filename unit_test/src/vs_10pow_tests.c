/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_10pow_tests.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 03:35:46 by stephane          #+#    #+#             */
/*   Updated: 2024/01/13 16:08:16 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "unit_test.h"

static void	print_test(int n)
{
	printf("%3i = %.17Le\n", n, vs_10pow(n));
}

int	main(void)
{
	t_float128	n;

		print_test(23);
	n = -1;
	while (n++ <= 308)
		print_test(n);
	return (0);
}