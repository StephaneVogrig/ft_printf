/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:39:11 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 16:44:08 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_char(void)
{
	int	result;

	printf("\n");
	printf("test char\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf(" %%c, a = %c", 'a'));
	printf(" | %i\n", printf(" %%c, a = %c", 'a'));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf(" %%c, %% = %c", '%'));
	printf(" | %i\n", printf(" %%c, %% = %c", '%'));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf(" %%c, -100 = %c", -100));
	printf(" | %i\n", printf(" %%c, -100 = %c", -100));
	printf("--------------------------\n");
}
