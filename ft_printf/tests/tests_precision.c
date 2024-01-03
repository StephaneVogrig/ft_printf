/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:51:38 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 15:23:13 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void tests_precision(void)
{
	printf("\n");
	printf("test precision\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%.6i , 0 = ", 0));
	printf(" | %i            \n",    printf("%.6i , 0 = ", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.0i = %.0i", 0));
	printf(" | %i            \n",    printf("%%.0i = %.0i", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.i = %.i", 42));
	printf(" | %i            \n",    printf("%%.i = %.i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.1i = %.1i", 42));
	printf(" | %i            \n",    printf("%%.1i = %.1i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.2i = %.2i", 42));
	printf(" | %i            \n",    printf("%%.2i = %.2i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.3i = %.3i", 42));
	printf(" | %i            \n",    printf("%%.3i = %.3i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.3i = %10.3i", 42));
	printf(" | %i            \n",    printf("%%10.3i = %10.3i", 42));
	printf("--------------------------\n");
}