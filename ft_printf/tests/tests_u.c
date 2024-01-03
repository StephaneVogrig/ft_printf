/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:47:38 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 05:07:08 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void tests_u(void)
{
	printf("\n");
	printf("test unsigned int\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%u, UINT_MAX = %u", UINT_MAX));
	printf(" | %i\n", printf("%%u, UINT_MAX = %u", UINT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%u, 42 = %u", 42));
	printf(" | %i\n", printf("%%u, 42 = %u", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%u, 0 = %u", 0));
	printf(" | %i\n", printf("%%u, 0 = %u", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10u, 42 = %10u", 42));
	printf(" | %i\n", printf("%%10u, 42 = %10u", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10u, 42 = %-10u", 42));
	printf(" | %i\n", printf("%%-10u, 42 = %-10u", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010u, 42 = %010u", 42));
	printf(" | %i\n", printf("%%010u, 42 = %010u", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.10u, 42 = %.10u", 42));
	printf(" | %i\n", printf("%%.10u, 42 = %.10u", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%20.10u, 42 = %20.10u", 42));
	printf(" | %i\n", printf("%%20.10u, 42 = %20.10u", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-20.10u, 42 = %-20.10u", 42));
	printf(" | %i\n", printf("%%-20.10u, 42 = %-20.10u", 42));
	printf("--------------------------\n");
}
