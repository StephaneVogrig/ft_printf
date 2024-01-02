/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:43:51 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 16:34:58 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_d(void)
{
	int	result = 0;

	printf("\n");
	printf("test d\n--------------------------\n");
	result = ft_printf("print %%d 2147483647 = %d", INT_MAX);
	printf(" | %i\n", result);
	result = printf("print %%d 2147483647 = %d", INT_MAX);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %d", 214);
	printf(" | %i\n", result);
	result = printf("214 = %d", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("0 = %d", 0);
	printf(" | %i\n", result);
	result = printf("0 = %d", 0);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("-214 = %d", -214);
	printf(" | %i\n", result);
	result = printf("-214 = %d", -214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("-2147483648 = %d", INT_MIN);
	printf(" | %i\n", result);
	result = printf("-2147483648 = %d", INT_MIN);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}
