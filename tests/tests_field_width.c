/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_field_width.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:27:57 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 16:42:42 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_field_width(void)
{
	printf("\n");
	printf("tests field width\n");
	printf("--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%i, int max = %i", INT_MAX));
	printf(" | %i            \n",    printf("%%i, int max = %i", INT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%20i, int max = %20i", INT_MAX));
	printf(" | %i            \n",    printf("%%20i, int max = %20i", INT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("int max = %i", INT_MAX));
	printf(" | %i            \n",    printf("int max = %i", INT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%#-5x", 52625));
	printf(" | %i            \n",    printf("%#-5x", 52625));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%#10.10x", -52625));
	printf(" | %i            \n",    printf("%#10.10x", -52625));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("% 3d", 0));
	printf(" | %i            \n",    printf("% 3d", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("% 7d", 33));
	printf(" | %i            \n",    printf("% 7d", 33));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("% -3d", 0));
	printf(" | %i            \n",    printf("% -3d", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("% -7d", 33));
	printf(" | %i            \n",    printf("% -7d", 33));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%+5d", 35));
	printf(" | %i            \n",    printf("%+5d", 35));
	printf("\n");
	printf("--------------------------\n");
}