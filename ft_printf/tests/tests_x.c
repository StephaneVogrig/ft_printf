/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:48:45 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 16:35:37 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_x(void)
{
	int	result;
	unsigned int	unsigned_int_max = 4294967295;

	printf("\n");
	printf("test hexadecimal\n--------------------------\n");
	result = ft_printf("unsigned int max = %x", unsigned_int_max);
	printf(" | %i\n", result);
	result = printf("unsigned int max = %x", unsigned_int_max);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %x", 214);
	printf(" | %i\n", result);
	result = printf("214 = %x", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("0 = %x", 0);
	printf(" | %i\n", result);
	result = printf("0 = %x", 0);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("%#.5x", 0);
	printf(" | %i\n", result);
	result = printf("%#.5x", 0);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %#-18.10x", 214);
	printf(" | %i\n", result);
	result = printf("214 = %#-18.10x", 214);
	printf(" | %i\n", result);
	printf("\n");
	printf("%d\n", ft_printf("%#-5x", 52625));
	printf("%d\n", printf("%#-5x", 52625));
	printf("--------------------------\n");
}
