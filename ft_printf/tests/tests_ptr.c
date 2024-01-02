/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:41:10 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 16:35:19 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_ptr()
{
	int	result = 0;
	char str[10] = {0,0,0,0,0,0,0,0,0,0};
	char *str_null;

	str_null =  NULL;
	printf("\n");
	printf("test ptr\n--------------------------\n");
	result = ft_printf("ptr null = %p", str_null);
	printf(" | %i\n", result);
	result = printf("ptr null = %p", str_null);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("ptr null = %10p", str_null);
	printf(" | %i\n", result);
	result = printf("ptr null = %10p", str_null);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("ptr null = %-10p", str_null);
	printf(" | %i\n", result);
	result = printf("ptr null = %-10p", str_null);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("ptr null = %p", str_null);
	printf(" | %i\n", result);
	result = printf("ptr null = %2p", str_null);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("ptr = %p", str);
	printf(" | %i\n", result);
	result = printf("ptr = %p", str);
	printf(" | %i\n", result);
	printf("\n");
	str[0] = 'a'; str[1] = 'b';
	result = ft_printf("ptr = \"%p\"", str + 16);
	printf(" | %i\n", result);
	result = printf("ptr = \"%p\"", str + 16);
	printf(" | %i\n", result);
	printf("\n");
	str[0] = 'a'; str[1] = 'b';
	result = ft_printf("ptr = \"%20p\"", str + 16);
	printf(" | %i\n", result);
	result = printf("ptr = \"%20p\"", str + 16);
	printf(" | %i\n", result);
	printf("\n");
	str[0] = 'a'; str[1] = 'b';
	result = ft_printf("ptr = \"%p\"", str + 16);
	printf(" | %i\n", result);
	result = printf("ptr = \"%p\"", str + 16);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}
