/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:50:09 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 16:49:52 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_X(void)
{
	int	result;

	printf("\n");
	printf("test HEXADECIMAL\n");
	printf("--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%X, UINT_MAX = %X", UINT_MAX));
	printf(" | %i            \n",    printf("%%X, UINT_MAX = %X", UINT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%X, 42 = %X", 42));
	printf(" | %i            \n",    printf("%%X, 42 = %X", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%X, 0 = %X", 0));
	printf(" | %i            \n",    printf("%%X, 0 = %X", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#X, UINT_MAX = %#X", UINT_MAX));
	printf(" | %i            \n",    printf("%%#X, UINT_MAX = %#X", UINT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#X, 42 = %#X", 42));
	printf(" | %i            \n",    printf("%%#X, 42 = %#X", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#X, 0 = %#X", 0));
	printf(" | %i            \n",    printf("%%#X, 0 = %#X", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#.5X, 0 = %#.5X", 0));
	printf(" | %i            \n",    printf("%%#.5X, 0 = %#.5X", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#18.10X, 42 = %#18.10X", 42));
	printf(" | %i            \n",    printf("%%#18.10X, 42 = %#18.10X", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#018.10X, 42 = %#018X", 42));
	printf(" | %i            \n",    printf("%%#018.10X, 42 = %#018X", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#-18.10X, 42 = %#-18.10X", 42));
	printf(" | %i            \n",    printf("%%#-18.10X, 42 = %#-18.10X", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#-5X, 52625 = %#-5X", 52625));
	printf(" | %i            \n",    printf("%%#-5X, 52625 = %#-5X", 52625));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.0X, 0 = %.0X", 0));
	printf(" | %i            \n",    printf("%%.0X, 0 = %.0X", 0));
	printf("--------------------------\n");
}
