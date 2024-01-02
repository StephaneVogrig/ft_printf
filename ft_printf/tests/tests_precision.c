/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:51:38 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 16:35:16 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void tests_precision(void)
{
	int result;

	printf("\n");
	printf("test precision\n--------------------------\n");
	// printf(" | %i\n", ft_printf("%%.6i , 0 : ", 0));
	result = printf("int max = %.6i", 0);
	printf(" | %i\n", result);
	result = printf("int max = %.0i", 0);
	printf(" | %i\n", result);
	result = printf("int max = %.1i", 0);
	printf(" | %i\n", result);
	result = printf("int max = %.1i", 0);
	printf(" | %i\n", result);
	result = printf("int max = %20.0i", 1);
	printf(" | %i\n", result);
	result = printf("int max = %20.1i", 12);
	printf(" | %i\n", result);
	printf("--------------------------\n");
/**/	
}