/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_il.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:58:17 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 17:40:52 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void tests_il(void)
{
	printf("\n");
	printf("test long int\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%li, LONG_MAX = %li", LONG_MAX));
	printf(" | %i\n", printf("%%li, LONG_MAX = %li", LONG_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%li, 42l = %li", 42l));
	printf(" | %i\n", printf("%%li, 42l = %li", 42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%li, 0l = %li", 0l));
	printf(" | %i\n", printf("%%li, 0l = %li", 0l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%li, -42l = %li", -42l));
	printf(" | %i\n", printf("%%li, -42l = %li", -42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%li, LONG_MIN = %li", LONG_MIN));
	printf(" | %i\n", printf("%%li, LONG_MIN = %li", LONG_MIN));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10li, 42l = %10li", 42l));
	printf(" | %i\n", printf("%%10li, 42l = %10li", 42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10li, 42l = %-10li", 42l));
	printf(" | %i\n", printf("%%-10li, 42l = %-10li", 42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010li, 42l = %010li", 42l));
	printf(" | %i\n", printf("%%010li, 42l = %010li", 4l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+10li, 42l = %+10li", 42l));
	printf(" | %i\n", printf("%%+10li, 42l = %+10li", 42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+010li, 42l = %+010li", 42l));
	printf(" | %i\n", printf("%%+010li, 42l = %+010li", 42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% 10li, 42l = % 10li", 42l));
	printf(" | %i\n", printf("%% 10li, 42l = % 10li", 42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.10li, 42l = %.10li", 42l));
	printf(" | %i\n", printf("%%.10li, 42l = %.10li", 42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+.10li, 42l = %+.10li", 42l));
	printf(" | %i\n", printf("%%+.10li, 42l = %+.10li", 42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% .10li, 42l = % .10li", 42l));
	printf(" | %i\n", printf("%% .10li, 42l = % .10li", 42l));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-.10li, 42l = %-.10li", 42l));
	printf(" | %i\n", printf("%%-.10li, 42l = %-.10li", 42l));
	printf("--------------------------\n");
}
