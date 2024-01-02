/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ul.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:24:01 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 18:26:02 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_ul(void)
{
	printf("\n");
	printf("test unsigned long int\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%lu, ULONG_MAX = %lu", ULONG_MAX));
	printf(" | %i\n", printf("%%lu, ULONG_MAX = %lu", ULONG_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%lu, 42ul = %lu", 42ul));
	printf(" | %i\n", printf("%%lu, 42ul = %lu", 42ul));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%lu, 0ul = %lu", 0ul));
	printf(" | %i\n", printf("%%lu, 0ul = %lu", 0ul));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10lu, 42ul = %10lu", 42ul));
	printf(" | %i\n", printf("%%10lu, 42ul = %10lu", 42ul));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10lu, 42ul = %-10lu", 42ul));
	printf(" | %i\n", printf("%%-10lu, 42ul = %-10lu", 42ul));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010lu, 42ul = %010lu", 42ul));
	printf(" | %i\n", printf("%%010lu, 42ul = %010lu", 42ul));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.10lu, 42ul = %.10lu", 42ul));
	printf(" | %i\n", printf("%%.10lu, 42ul = %.10lu", 42ul));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%20.10lu, 42ul = %20.10lu", 42ul));
	printf(" | %i\n", printf("%%20.10lu, 42ul = %20.10lu", 42ul));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-20.10lu, 42ul = %-20.10lu", 42ul));
	printf(" | %i\n", printf("%%-20.10lu, 42ul = %-20.10lu", 42ul));
	printf("--------------------------\n");
}