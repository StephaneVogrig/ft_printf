/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_hi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:28:51 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 16:42:52 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_hi(void)
{
	printf("tests hi\n");
	printf("--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%hd", (short)42));
	printf(" | %i            \n",    printf("%hd", (short)42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%hd", (short)0));
	printf(" | %i            \n",    printf("%hd", (short)0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%hd", (short)-42));
	printf(" | %i            \n",    printf("%hd", (short)-42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%hd", (short)SHRT_MAX));
	printf(" | %i            \n",    printf("%hd", (short)SHRT_MAX));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%hd", (short)SHRT_MIN));
	printf(" | %i            \n",    printf("%hd", (short)SHRT_MIN));
	printf("\n");
	printf("--------------------------\n");
}