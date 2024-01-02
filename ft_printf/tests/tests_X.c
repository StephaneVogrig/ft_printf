/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_X.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:50:09 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 16:35:40 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_X(void)
{
	int	result;

	printf("\n");
	printf("test HEXADECIMAL\n--------------------------\n");
	result = ft_printf("unsigned int max = %X", UINT_MAX);
	printf(" | %i\n", result);
	result = printf("unsigned int max = %X", UINT_MAX);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %X", 214);
	printf(" | %i\n", result);
	result = printf("214 = %X", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("0 = %X", 0);
	printf(" | %i\n", result);
	result = printf("0 = %X", 0);
	printf(" | %i\n", result);
	
	printf("%d\n", ft_printf("%#-5x", 52625));
	printf("%d\n", printf("%#-5x", 52625));
	printf("--------------------------\n");
}
