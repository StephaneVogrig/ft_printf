/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_purcent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:56:49 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 16:51:01 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_purcent(void)
{
	int	result;

	printf("\n");
	printf("test %%\n");
	printf("--------------------------\n");
	result = ft_printf("%%");
	printf(" | %i\n", result);
	result = printf("%%");
	printf(" | %i\n", result);
	printf("\n");
	// result = ft_printf("%", 0);
	// printf(" | %i\n", result);
	// result = printf("%", 0);
	// printf(" | %i\n", result);
	// printf("\n");
	result = ft_printf("%%%% = %%");
	printf(" | %i\n", result);
	result = printf("%%%% = %%");
	printf(" | %i\n", result);
	printf("\n");
	// result = ft_printf("%s%% le monde en%%%kore%c", "Bonjour", '*');
	// printf(" | %i\n", result);
	// result = printf("%s%% le monde en%%%kore%c", "Bonjour", '*');
	// printf(" | %i\n", result);
	// printf("\n");

	// result = ft_printf("%s%% le monde en%%%kore et %", "Bonjour");
	// printf(" | %i\n", result);
	// result = printf("%s%% le monde en%%%kore et %", "Bonjour");
	// printf(" | %i\n", result);
	// printf("\n");
	printf("--------------------------\n");
}
