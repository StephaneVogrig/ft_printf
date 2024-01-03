/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_precision_etoile.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:03:59 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 15:38:27 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_precision_etoile(void)
{
	printf("test precision *\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.*i , 0, 42 = %.*i", 0, 42));
	printf(" | %i            \n",    printf("%%.*i , 0, 42 = %.*i", 0, 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.*i , 0, 0 = %.*i", 0, 0));
	printf(" | %i            \n",    printf("%%.*i , 0, 0 = %.*i", 0, 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.*i , -5, 0 = %.*i", -5, 0));
	printf(" | %i            \n",    printf("%%.*i , -5, 0 = %.*i", -5, 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.*i, 5, 42 = %.*i", 5, 42));
	printf(" | %i            \n",    printf("%%.*i, 5, 42 = %.*i", 5, 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.*i, -5, 42 = %.*i", -5, 42));
	printf(" | %i            \n",    printf("%%.*i, -5, 42 = %.*i", -5, 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.*i, 5, 42 = %.*i", 5, 0));
	printf(" | %i            \n",    printf("%%.*i, 5, 42 = %.*i", 5, 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.*i = %10.*i", 3, 42));
	printf(" | %i            \n",    printf("%%10.*i = %10.*i", 3, 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.*i = %10.*i", 3, INT_MAX));
	printf(" | %i            \n",    printf("%%10.*i = %10.*i", 3, INT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.*i = %10.*i", 3, INT_MIN));
	printf(" | %i            \n",    printf("%%10.*i = %10.*i", 3, INT_MIN));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.*i = %10.*i", INT_MIN, 42));
	printf(" | %i            \n",    printf("%%10.*i = %10.*i", INT_MIN, 42));
	printf("--------------------------\n");
}
