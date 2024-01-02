/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:42:52 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 17:52:49 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void tests_ill(void)
{
	printf("\n");
	printf("test long long int\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%lli, LLONG_MAX = %lli", LLONG_MAX));
	printf(" | %i\n", printf("%%lli, LLONG_MAX = %lli", LLONG_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%lli, 42ll = %lli", 42ll));
	printf(" | %i\n", printf("%%lli, 42ll = %lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%lli, 0ll = %lli", 0ll));
	printf(" | %i\n", printf("%%lli, 0ll = %lli", 0ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%lli, -42ll = %lli", -42ll));
	printf(" | %i\n", printf("%%lli, -42ll = %lli", -42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%lli, LLONG_MIN = %lli", LLONG_MIN));
	printf(" | %i\n", printf("%%lli, LLONG_MIN = %lli", LLONG_MIN));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10lli, 42ll = %10lli", 42ll));
	printf(" | %i\n", printf("%%10lli, 42ll = %10lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10lli, 42ll = %-10lli", 42ll));
	printf(" | %i\n", printf("%%-10lli, 42ll = %-10lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010lli, 42ll = %010lli", 42ll));
	printf(" | %i\n", printf("%%010lli, 42ll = %010lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+10lli, 42ll = %+10lli", 42ll));
	printf(" | %i\n", printf("%%+10lli, 42ll = %+10lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+010lli, 42ll = %+010lli", 42ll));
	printf(" | %i\n", printf("%%+010lli, 42ll = %+010lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% 10lli, 42ll = % 10lli", 42ll));
	printf(" | %i\n", printf("%% 10lli, 42ll = % 10lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.10lli, 42ll = %.10lli", 42ll));
	printf(" | %i\n", printf("%%.10lli, 42ll = %.10lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+.10lli, 42ll = %+.10lli", 42ll));
	printf(" | %i\n", printf("%%+.10lli, 42ll = %+.10lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% .10lli, 42ll = % .10lli", 42ll));
	printf(" | %i\n", printf("%% .10lli, 42ll = % .10lli", 42ll));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-.10lli, 42ll = %-.10lli", 42ll));
	printf(" | %i\n", printf("%%-.10lli, 42ll = %-.10lli", 42ll));
	printf("--------------------------\n");
}
