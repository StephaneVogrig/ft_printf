/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:46:19 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 16:42:57 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_i(void)
{
	printf("\n");
	printf("test int\n");
	printf("--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%i, INT_MAX = %i", INT_MAX));
	printf(" | %i\n", printf("%%i, INT_MAX = %i", INT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%i, 42 = %i", 42));
	printf(" | %i\n", printf("%%i, 42 = %i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%i, 0 = %i", 0));
	printf(" | %i\n", printf("%%i, 0 = %i", 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%i, -42 = %i", -42));
	printf(" | %i\n", printf("%%i, -42 = %i", -42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%i, INT_MIN = %i", INT_MIN));
	printf(" | %i\n", printf("%%i, INT_MIN = %i", INT_MIN));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10i, 42 = %10i", 42));
	printf(" | %i\n", printf("%%10i, 42 = %10i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10i, 42 = %-10i", 42));
	printf(" | %i\n", printf("%%-10i, 42 = %-10i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010i, 42 = %010i", 42));
	printf(" | %i\n", printf("%%010i, 42 = %010i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+10i, 42 = %+10i", 42));
	printf(" | %i\n", printf("%%+10i, 42 = %+10i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+010i, 42 = %+010i", 42));
	printf(" | %i\n", printf("%%+010i, 42 = %+010i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% 10i, 42 = % 10i", 42));
	printf(" | %i\n", printf("%% 10i, 42 = % 10i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.10i, 42 = %.10i", 42));
	printf(" | %i\n", printf("%%.10i, 42 = %.10i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+.10i, 42 = %+.10i", 42));
	printf(" | %i\n", printf("%%+.10i, 42 = %+.10i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% .10i, 42 = % .10i", 42));
	printf(" | %i\n", printf("%% .10i, 42 = % .10i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-.10i, 42 = %-.10i", 42));
	printf(" | %i\n", printf("%%-.10i, 42 = %-.10i", 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+04i, 42 = %+04i", 0));
	printf(" | %i\n", printf("%%+04i, 42 = %+04i", 0));
	printf("--------------------------\n");
}
