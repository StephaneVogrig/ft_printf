/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_warning_cc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:18:00 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 16:41:37 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_warning_cc(void)
{
	printf("tests warning\n");
	printf("--------------------------\n");
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%010.3i = %010.3i", 42));
	printf(" | %i            \n",    printf("%%010.3i = %010.3i", 42));
	printf("--------------------------\n");
}