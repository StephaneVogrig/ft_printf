/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:34:56 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 15:10:20 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

#define FLOAT_MAX 3.40282346e38
#define FLOAT_MIN -3.40282346e38
#define FLOAT_CLOSE_ZERO 1.4e-45

void	tests_f(void)
{
	printf("\n");
	printf("sizeof(float) = %lu\n", sizeof(float));
	printf("test float\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, FLOAT_MAX = %f", FLOAT_MAX));
	printf(" | %i            \n",    printf("%%f, FLOAT_MAX = %f", FLOAT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, 42e42 = %f", 42e42));
	printf(" | %i            \n",    printf("%%f, 42e42 = %f", 42e42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, 42.0f = %f", 42.0f));
	printf(" | %i            \n",    printf("%%f, 42.0f = %f", 42.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, FLOAT_CLOSE_ZERO = %f", FLOAT_CLOSE_ZERO));
	printf(" | %i            \n",    printf("%%f, FLOAT_CLOSE_ZERO = %.46f", FLOAT_CLOSE_ZERO));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, 0.0f = %f", 0.0f));
	printf(" | %i            \n",    printf("%%f, 0.0f = %f", 0.0f));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%f, FLOAT_MIN = %f", FLOAT_MIN));
	printf(" | %i            \n",    printf("%%f, FLOAT_MIN = %f", FLOAT_MIN));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%f,  -42.0f = %f",  -42.0f));
	// printf(" | %i\n", printf("%%f,  -42.0f = %f",  -42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%f, FLOAT_MIN = %f", FLOAT_MIN));
	// printf(" | %i\n", printf("%%f, FLOAT_MIN = %f", FLOAT_MIN));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%10f, 42.0f = %10f", 42.0f));
	// printf(" | %i\n", printf("%%10f, 42.0f = %10f", 42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%-10f, 42.0f = %-10f", 42.0f));
	// printf(" | %i\n", printf("%%-10f, 42.0f = %-10f", 42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%010f, 42.0f = %010f", 42.0f));
	// printf(" | %i\n", printf("%%010f, 42.0f = %010f", 42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%+10f, 42.0f = %+10f", 42.0f));
	// printf(" | %i\n", printf("%%+10f, 42.0f = %+10f", 42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%+010f, 42.0f = %+010f", 42.0f));
	// printf(" | %i\n", printf("%%+010f, 42.0f = %+010f", 42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%% 10f, 42.0f = % 10f", 42.0f));
	// printf(" | %i\n", printf("%% 10f, 42.0f = % 10f", 42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%.10f, 42.0f = %.10f", 42.0f));
	// printf(" | %i\n", printf("%%.10f, 42.0f = %.10f", 42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%+.10f, 42.0f = %+.10f", 42.0f));
	// printf(" | %i\n", printf("%%+.10f, 42.0f = %+.10f", 42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%% .10f, 42.0f = % .10f", 42.0f));
	// printf(" | %i\n", printf("%% .10f, 42.0f = % .10f", 42.0f));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%-.10f, 42.0f = %-.10f", 42.0f));
	// printf(" | %i\n", printf("%%-.10f, 42.0f = %-.10f", 42.0f));
	printf("--------------------------\n");
}