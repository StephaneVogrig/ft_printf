/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:40:09 by stephane          #+#    #+#             */
/*   Updated: 2024/01/05 18:03:30 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_str()
{
	char *str_null;
	
	printf("\n");
	printf("test string\n");
	printf("--------------------------\n");
	
	printf(" | %i (ft_printf)\n", ft_printf("%%s, \"\" = \"%s\"", ""));
	printf(" | %i            \n",    printf("%%s, \"\" = \"%s\"", ""));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.s, \"\" = \"%.s\"", ""));
	printf(" | %i            \n",    printf("%%.s, \"\" = \"%.s\"", ""));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.3s, \"\" = \"%.3s\"", ""));
	printf(" | %i            \n",    printf("%%.3s, \"\" = \"%.3s\"", ""));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%s, \"\" = \"%10s\"", ""));
	printf(" | %i            \n",    printf("%%s, \"\" = \"%10s\"", ""));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%s, \"ecole42\" = \"%s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%s, \"ecole42\" = \"%s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.s, \"ecole42\" = \"%.s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%.s, \"ecole42\" = \"%.s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.3s, \"ecole42\" = \"%.3s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%.3s, \"ecole42\" = \"%.3s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.6s, \"ecole42\" = \"%.6s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%.6s, \"ecole42\" = \"%.6s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.9s, \"ecole42\" = \"%.9s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%.9s, \"ecole42\" = \"%.9s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10s, \"ecole42\" = \"%10s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%10s, \"ecole42\" = \"%10s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.s, \"ecole42\" = \"%10.s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%10.s, \"ecole42\" = \"%10.s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.3s, \"ecole42\" = \"%10.3s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%10.3s, \"ecole42\" = \"%10.3s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.6s, \"ecole42\" = \"%10.6s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%10.6s, \"ecole42\" = \"%10.6s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.9s, \"ecole42\" = \"%10.9s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%10.9s, \"ecole42\" = \"%10.9s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10s, \"ecole42\" = \"%-10s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%-10s, \"ecole42\" = \"%-10s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10.s, \"ecole42\" = \"%-10.s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%-10.s, \"ecole42\" = \"%-10.s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10.3s, \"ecole42\" = \"%-10.3s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%-10.3s, \"ecole42\" = \"%-10.3s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10.6s, \"ecole42\" = \"%-10.6s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%-10.6s, \"ecole42\" = \"%-10.6s\"", "ecole42"));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%-10.9s, \"ecole42\" = \"%-10.9s\"", "ecole42"));
	printf(" | %i            \n",    printf("%%-10.9s, \"ecole42\" = \"%-10.9s\"", "ecole42"));
	printf("\n");
	
	str_null =  NULL;
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%% = \"%s\"", str_null));
	printf(" | %i            \n",    printf("%% = \"%s\"", str_null));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.0s, null = \"%.0s\"", str_null));
	printf(" | %i            \n",    printf("%%.0s, null = \"%.0s\"", str_null));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.3s, null = \"%.3s\"", str_null));
	printf(" | %i            \n",    printf("%%.3s, null = \"%.3s\"", str_null));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.6s, null = \"%.6s\"", str_null));
	printf(" | %i            \n",    printf("%%.6s, null = \"%.6s\"", str_null));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%.9s, null = \"%.9s\"", str_null));
	printf(" | %i            \n",    printf("%%.9s, null = \"%.9s\"", str_null));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.0s, null = \"%10.0s\"", str_null));
	printf(" | %i            \n",    printf("%%10.0s, null = \"%10.0s\"", str_null));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.3s, null = \"%10.3s\"", str_null));
	printf(" | %i            \n",    printf("%%10.3s, null = \"%10.3s\"", str_null));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.6s, null = \"%10.6s\"", str_null));
	printf(" | %i            \n",    printf("%%10.6s, null = \"%10.6s\"", str_null));
	printf("\n");
	printf(" | %i (ft_printf)\n", ft_printf("%%10.9s, null = \"%10.9s\"", str_null));
	printf(" | %i            \n",    printf("%%10.9s, null = \"%10.9s\"", str_null));

	printf("--------------------------\n");
}