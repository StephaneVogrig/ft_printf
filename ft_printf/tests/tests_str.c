/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:40:09 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 07:20:45 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_str()
{
	int	result;
	char str[10] = {0,0,0,0,0,0,0,0,0,0};
	char *str_null;
	char *str2;

	str_null =  NULL;
	printf("\n");
	printf("test string\n--------------------------\n");
	printf(" | %i\n", ft_printf("chaine vide = \"%s\"", str));
	printf(" | %i\n", printf("chaine vide = \"%s\"", str));
	printf("\n");
	str[0] = 'a'; str[1] = 'b';
	result = ft_printf("\"ab\" = \"%s\"", str);
	printf(" | %i\n", result);
	result = printf("\"ab\" = \"%s\"", str);
	printf(" | %i\n", result);
	printf("\n");
	printf(" | %i\n", ft_printf("chaine null = \"%s\"", str_null));
	printf(" | %i\n", printf("chaine null = \"%s\"", str_null));
	printf("\n");
	printf(" | %i\n", ft_printf("chaine null = \"%10.7s\"", str_null));
	printf(" | %i\n", printf("chaine null = \"%10.7s\"", str_null));
	printf("\n");
	printf(" | %i\n", ft_printf("%%.0s, null = \"%.0s\"", str_null));
	printf(" | %i\n", printf("%%.0s, null = \"%.0s\"", str_null));
	printf("\n");
	str2 = "ma chaine";
	result = ft_printf("chaine null = \"%10.6s\"", str_null);
	printf(" | %i\n", result);
	result = printf("chaine null = \"%10.6s\"", str_null);
	printf(" | %i\n", result);
	printf("\n");
	str2 = "ma chaine";
	printf(" | %i\n", ft_printf("chaine null = \"%10.1s\"", str2));
	printf(" | %i\n", printf("chaine null = \"%10.1s\"", str2));
	printf("--------------------------\n");
}