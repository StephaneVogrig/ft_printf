/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_field_width_etoile.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:57:47 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 16:15:04 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#include "tests.h"

void	tests_field_width_etoile(void)
{
	printf("\n");
	printf("tests field width\n--------------------------\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% *d, -5, 0 = % *d", 2048, 0));
	printf(" | %i            \n",    printf("%% *d, -5, 0 = % *d", 2048, 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% *d, -5, 0 = %0*d", 2048, 0));
	printf(" | %i            \n",    printf("%% *d, -5, 0 = %0*d", 2048, 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% *d, -5, 0 = % *d", 0, 0));
	printf(" | %i            \n",    printf("%% *d, -5, 0 = % *d", 0, 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% *d, -5, 0 = % *d", -5, 0));
	printf(" | %i            \n",    printf("%% *d, -5, 0 = % *d", -5, 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+*d,  5, 0 = %+*d", 5, 0));
	printf(" | %i            \n",    printf("%%+*d,  5, 0 = %+*d", 5, 0));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% *d, -5, 42 = % *d", -5, 42));
	printf(" | %i            \n",    printf("%% *d, -5, 42 = % *d", -5, 42));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%+*d,  5, 42 = %+*d", 5, 42));
	printf(" | %i            \n",    printf("%%+*d,  5, 42 = %+*d", 5, 42));
	printf("\n");
	printf("--------------------------\n");
}