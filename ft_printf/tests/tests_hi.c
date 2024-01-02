/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_hi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:28:51 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 16:35:04 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_hi(void)
{
	printf("tests hi\n--------------------------\n");
	printf(" | %i\n", ft_printf("%hd", 42));
	printf(" | %i\n", printf("%hd", 42));
	printf("\n");
	printf(" | %i\n", ft_printf("%hd", 0));
	printf(" | %i\n", printf("%hd", 0));
	printf("\n");
	printf(" | %i\n", ft_printf("%hd", -42));
	printf(" | %i\n", printf("%hd", -42));
	printf("\n");
	printf(" | %i\n", ft_printf("%hd", 32767));
	printf(" | %i\n", printf("%hd", 32767));
	printf("\n");
	printf(" | %i\n", ft_printf("%hd", -32768));
	printf(" | %i\n", printf("%hd", -32768));
	printf("\n");
	printf("--------------------------\n");
}