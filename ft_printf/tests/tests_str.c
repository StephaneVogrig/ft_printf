/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 01:40:09 by stephane          #+#    #+#             */
/*   Updated: 2024/01/02 16:35:27 by stephane         ###   ########.fr       */
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
	result = ft_printf("chaine vide = \"%s\"", str);
	printf(" | %i\n", result);
	result = printf("chaine vide = \"%s\"", str);
	printf(" | %i\n", result);
	printf("\n");
	str[0] = 'a'; str[1] = 'b';
	result = ft_printf("\"ab\" = \"%s\"", str);
	printf(" | %i\n", result);
	result = printf("\"ab\" = \"%s\"", str);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("chaine null = \"%s\"", str_null);
	printf(" | %i\n", result);
	result = printf("chaine null = \"%s\"", str_null);
	printf(" | %i\n", result);
	result = ft_printf("chaine null = \"%10.7s\"", str_null);
	printf(" | %i\n", result);
	result = printf("chaine null = \"%10.7s\"", str_null);
	printf(" | %i\n", result);
	str2 = "ma chaine";
	result = ft_printf("chaine null = \"%10.6s\"", str_null);
	printf(" | %i\n", result);
	result = printf("chaine null = \"%10.6s\"", str_null);
	printf(" | %i\n", result);
	str2 = "ma chaine";
	result = ft_printf("chaine null = \"%10.1s\"", str2);
	printf(" | %i\n", result);
	result = printf("chaine null = \"%10.1s\"", str2);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}