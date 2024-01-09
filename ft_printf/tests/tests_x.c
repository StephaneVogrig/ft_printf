/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:48:45 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 16:47:30 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_x(void)
{
	printf("test hexadecimal\n");
	printf("--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%x, UINT_MAX = %x", UINT_MAX));
	printf(" | %i            \n",    printf("%%x, UINT_MAX = %x", UINT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%x, 42 = %x", 42));
	printf(" | %i            \n",    printf("%%x, 42 = %x", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%x, 0 = %x", 0));
	printf(" | %i            \n",    printf("%%x, 0 = %x", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#x, UINT_MAX = %#x", UINT_MAX));
	printf(" | %i            \n",    printf("%%#x, UINT_MAX = %#x", UINT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#x, 42 = %#x", 42));
	printf(" | %i            \n",    printf("%%#x, 42 = %#x", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#x, 0 = %#x", 0));
	printf(" | %i            \n",    printf("%%#x, 0 = %#x", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#.5x, 0 = %#.5x", 0));
	printf(" | %i            \n",    printf("%%#.5x, 0 = %#.5x", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#18.10x, 42 = %#18.10x", 42));
	printf(" | %i            \n",    printf("%%#18.10x, 42 = %#18.10x", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#018.10x, 42 = %#018x", 42));
	printf(" | %i            \n",    printf("%%#018.10x, 42 = %#018x", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#-18.10x, 42 = %#-18.10x", 42));
	printf(" | %i            \n",    printf("%%#-18.10x, 42 = %#-18.10x", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%#-5x, 52625 = %#-5x", 52625));
	printf(" | %i            \n",    printf("%%#-5x, 52625 = %#-5x", 52625));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.0x, 0 = %.0x", 0));
	printf(" | %i            \n",    printf("%%.0x, 0 = %.0x", 0));
	printf("--------------------------\n");
}
