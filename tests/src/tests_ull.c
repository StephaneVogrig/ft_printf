/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:06:45 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 16:45:56 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_ull(void)
{
	printf("\n");
	printf("test unsigned long long int");
	printf("\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%llu, ULLONG_MAX = %llu", ULLONG_MAX));
	printf(" | %i            \n",    printf("%%llu, ULLONG_MAX = %llu", ULLONG_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%llu, 42ull = %llu", 42ull));
	printf(" | %i            \n",    printf("%%llu, 42ull = %llu", 42ull));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%llu, 0ull = %llu", 0ull));
	printf(" | %i            \n",    printf("%%llu, 0ull = %llu", 0ull));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10llu, 42ull = %10llu", 42ull));
	printf(" | %i            \n",    printf("%%10llu, 42ull = %10llu", 42ull));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10llu, 42ull = %-10llu", 42ull));
	printf(" | %i            \n",    printf("%%-10llu, 42ull = %-10llu", 42ull));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010llu, 42ull = %010llu", 42ull));
	printf(" | %i            \n",    printf("%%010llu, 42ull = %010llu", 42ull));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.10llu, 42ull = %.10llu", 42ull));
	printf(" | %i            \n",    printf("%%.10llu, 42ull = %.10llu", 42ull));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%20.10llu, 42ull = %20.10llu", 42ull));
	printf(" | %i            \n",    printf("%%20.10llu, 42ull = %20.10llu", 42ull));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-20.10llu, 42ull = %-20.10llu", 42ull));
	printf(" | %i            \n",    printf("%%-20.10llu, 42ull = %-20.10llu", 42ull));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.0llu, 0ull = %.0llu", 0ull));
	printf(" | %i            \n",    printf("%%.0llu, 0ull = %.0llu", 0ull));
	printf("--------------------------\n");
}
