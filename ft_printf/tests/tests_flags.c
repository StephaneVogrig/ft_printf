/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:53:54 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 23:44:46 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_flags(void)
{
	int result;
	unsigned int 	ui = 42;
	
	printf("\n");
	printf("test flags\n");
	printf("--------------------------\n");
	printf(" | %i\n", ft_printf("unsigned int 42 = %u", 42));
	printf(" | %i\n", printf("unsigned int 42 = %u", 42));
	printf("\n");
	result = ft_printf("unsigned int 42 = %+d", 42);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %+d", 42);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("unsigned int 42 = %+i", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %+i", ui);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("unsigned int 42 = %x", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %X", ui);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("unsigned int 42 = %05u", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %05u", ui);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("unsigned int 42 = %+05d", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %+05d", ui);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("unsigned int 42 = %+05d", -ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %+05d", -ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = %5i", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %5i", ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = %.5i", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %.5i", ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = % .5i", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = % .5i", ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = %+.5i", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %+.5i", ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = %+.5i", -ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %+.5i", -ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = %i", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %i", ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = % i", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = % i", ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = %+i", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %+i", ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = % i", -ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = % i", -ui);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}