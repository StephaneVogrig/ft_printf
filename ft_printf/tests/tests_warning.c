/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_warning.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 02:27:59 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 15:21:18 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "tests.h"

void	tests_warning()
{
	printf("tests warning\n--------------------------\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%+10u, 42 = %+10u", 42));
	// printf(" | %i\n", printf("%%+10u, 42 = %+10u", 42));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%% 10u, 42 = % 10u", 42));
	// printf(" | %i\n", printf("%% 10u, 42 = % 10u", 42));
	// printf("\n");

	
	// result = printf("si %s : %.2147483648i n'affiche pas la suite", "overflow", INT_MAX); //2147483648
	// printf(" | %i\n", result);
// 	result = ft_printf("\"a la fin %%\" %");
// 	printf(" | %i\n", result);
// 	result = printf("\"a la fin %%\" %");
// 	printf(" | %i\n", result);
// 	printf("\n");
// 	result = ft_printf("c%", "Bonjour");
// 	printf(" | %i\n", result);
// 	result = printf("c%", "Bonjour");
// 	printf(" | %i\n", result);
// 	printf("\n");
// 	result = ft_printf("ft_printf : %j");
// 	printf(" | %i\n", result);
// 	result = printf("   printf : %j");
// 	printf(" | %i\n", result);
// 	printf("\n");
// 	result = ft_printf("ft_printf : %k");
// 	printf(" | %i\n", result);
// 	result = printf("   printf : %k");
// 	printf(" | %i\n", result);
// 	printf("\n");
// 	result = printf(" un seul echec a la fin : %##0010.2ll");
// 	printf(" | %i\n", result);
// 	result = printf("%##0010.2llk%##0010.2ll");
// 	printf(" | %i\n", result);
// 	result = printf("   printf : %k");
// 	printf(" | %i\n", result);
// 	result = printf("%%%");
// 	printf(" | %i\n", result);
// 	result = printf("%%hh%hh");
// 	printf(" | %i\n", result);
// 	result = printf("%%h%h");
// 	printf(" | %i\n", result);
// 	result = printf("%%l%l");
// 	printf(" | %i\n", result);
// 	result = printf("%%ll%ll");
// 	printf(" | %i\n", result);
// 	result = printf("%%L%L");
// 	printf(" | %i\n", result);
// 	result = printf("%%j:%j");
// 	printf(" | %i\n", result);
// 	result = printf("%%z:%z");
// 	printf(" | %i\n", result);
// 	result = printf("%%Z:%Z");
// 	printf(" | %i\n", result);
// 	result = printf("%%t:%t");
// 	printf(" | %i\n", result);
// 	result = printf("%% :% ");
// 	printf(" | %i\n", result);
// 	result = printf("%%#:%#");
// 	printf(" | %i\n", result);
// 	result = printf("%%1:%1");
// 	printf(" | %i\n", result);
// 	result = printf("%%10:%10");
// 	printf(" | %i\n", result);
// 	result = printf("%%.:%.");
// 	printf(" | %i\n", result);
// 	result = printf("%%.1:%.1");
// 	printf(" | %i\n", result);
// 	result = printf("%%.0:%.0");
// 	printf(" | %i\n", result);
// 	result = printf("%%#+- 1.1ll:%#+- 1.1ll");
// 	printf(" | %i\n", result);
// 	printf("\n");
// 	result = printf("%k%%%");
// 	printf(" | %i\n", result);
// 	result = printf("%hhk%%hh%hh");
// 	printf(" | %i\n", result);
// 	result = printf("%hk%%h%h");
// 	printf(" | %i\n", result);
// 	result = printf("%lk%%l%l");
// 	printf(" | %i\n", result);
// 	result = printf("%llk%%ll%ll");
// 	printf(" | %i\n", result);
// 	result = printf("%Lk%%L%L");
// 	printf(" | %i\n", result);
// 	result = printf("%jk%%j%j");
// 	printf(" | %i\n", result);
// 	result = printf("%zk%%z%z");
// 	printf(" | %i\n", result);
// 	result = printf("%Zk%%Z%Z");
// 	printf(" | %i\n", result);
// 	result = printf("%tk%%t%t");
// 	printf(" | %i\n", result);
// 	result = printf("% k%% % ");
// 	printf(" | %i\n", result);
// 	result = printf("%#k%%#%#");
// 	printf(" | %i\n", result);
// 	result = printf("%k%% -+#0+- 1.1ll:%#+- 1.1ll");
// 	printf(" | %i\n", result);
// 	result = printf("%k%% -+#0+- 1.ll:%#+- 1.ll");
// 	printf(" | %i\n", result);
// 	printf("\n");
// 	result = printf("%k");
// 	printf(" | %i\n", result);
// 	result = printf("\"a la fin %\" %");
// 	printf(" | %i\n", result);
// 	result = printf("\"%ka la fin %\" %");
// 	printf(" | %i\n", result);
// 	result = printf("%k%K%K%k");
// 	printf(" | %i\n", result);
// 	result = printf("%k%K%K%k%j");
// 	printf(" | %i\n", result);
// 	result = printf("%000   0# 0000310k%K%K%k%j");
// 	printf(" | %i\n", result);

//	printf(" | %i\n", ft_printf("% wef %"));
//	printf(" | %i\n", printf("% wef %"));
	// printf("\n");
	// printf(" | %i\n", ft_printf("%      00%00#10.lk", 0));
	// printf(" | %i\n", printf("%      00%00#10.lk", 0));
	// printf("\n");
	// printf(" | %i (ft_printf)\n", ft_printf("%%08.5i, 42 = %08.5i", 42));
	// printf(" | %i\n", printf("%%08.5i, 42 = %08.5i", 42));
	// printf("\n");
	// char *str_null = NULL;
	// printf("\n");
	// printf(" | %i\n", ft_printf("%%.0s, null = \"%.0p\"", str_null));
	// printf(" | %i\n", printf("%%.0s, null = \"%.0p\"", str_null));
	// printf("\n");
	// printf(" | %i\n", ft_printf("%%.0s, null = \"%.3p\"", str_null));
	// printf(" | %i\n", printf("%%.0s, null = \"%.3p\"", str_null));
/*	result = ft_printf("unsigned int 42 = %0", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %0", ui);
	printf(" | %i\n", result);
	result = ft_printf("unsigned int 42 = %+", ui);
	printf(" | %i\n", result);
	result = printf("unsigned int 42 = %+", ui);
	printf(" | %i\n", result);
*/
	printf("--------------------------\n");
 }