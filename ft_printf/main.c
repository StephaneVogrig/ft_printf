/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:03:12 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 20:17:21 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test_char(void)
{
	int	result;

	printf("\n");
	printf("test char\n--------------------------\n");
	result = ft_printf("ft_print %%c a = %c", 'a');
	printf(" | %i\n", result);
	result = printf("   print %%c a = %c", 'a');
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("print %%c %% = %c", '%');
	printf(" | %i\n", result);
	result = printf("print %%c %% = %c", '%');
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("print %%c -10 = %c", -100);
	printf(" | %i\n", result);
	result = printf("print %%c -10 = %c", -100);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}

void	test_str()
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
void	test_ptr()
{
	int	result = 0;
	char str[10] = {0,0,0,0,0,0,0,0,0,0};
	char *str_null;

	str_null =  NULL;
	printf("\n");
	printf("test ptr\n--------------------------\n");
	result = ft_printf("ptr null = %p", str_null);
	printf(" | %i\n", result);
	result = printf("ptr null = %p", str_null);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("ptr null = %10p", str_null);
	printf(" | %i\n", result);
	result = printf("ptr null = %10p", str_null);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("ptr null = %-10p", str_null);
	printf(" | %i\n", result);
	result = printf("ptr null = %-10p", str_null);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("ptr null = %p", str_null);
	printf(" | %i\n", result);
	result = printf("ptr null = %2p", str_null);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("ptr = %p", str);
	printf(" | %i\n", result);
	result = printf("ptr = %p", str);
	printf(" | %i\n", result);
	printf("\n");
	str[0] = 'a'; str[1] = 'b';
	result = ft_printf("ptr = \"%p\"", str + 16);
	printf(" | %i\n", result);
	result = printf("ptr = \"%p\"", str + 16);
	printf(" | %i\n", result);
	printf("\n");
	str[0] = 'a'; str[1] = 'b';
	result = ft_printf("ptr = \"%20p\"", str + 16);
	printf(" | %i\n", result);
	result = printf("ptr = \"%20p\"", str + 16);
	printf(" | %i\n", result);
	printf("\n");
	str[0] = 'a'; str[1] = 'b';
	result = ft_printf("ptr = \"%p\"", str + 16);
	printf(" | %i\n", result);
	result = printf("ptr = \"%p\"", str + 16);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}

void	test_d(void)
{
	int	result = 0;

	printf("\n");
	printf("test d\n--------------------------\n");
	result = ft_printf("print %%d 2147483647 = %d", INT_MAX);
	printf(" | %i\n", result);
	result = printf("print %%d 2147483647 = %d", INT_MAX);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %d", 214);
	printf(" | %i\n", result);
	result = printf("214 = %d", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("0 = %d", 0);
	printf(" | %i\n", result);
	result = printf("0 = %d", 0);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("-214 = %d", -214);
	printf(" | %i\n", result);
	result = printf("-214 = %d", -214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("-2147483648 = %d", INT_MIN);
	printf(" | %i\n", result);
	result = printf("-2147483648 = %d", INT_MIN);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}

void	test_int(void)
{
	int	result = 0;

	printf("\n");
	printf("test int\n--------------------------\n");
	result = ft_printf("print %%i 2147483647 = %i", INT_MAX);
	printf(" | %i\n", result);
	result = printf("print %%i 2147483647 = %i", INT_MAX);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %+.5i", 214);
	printf(" | %i\n", result);
	result = printf("214 = %+.5i", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = % .5i", 214);
	printf(" | %i\n", result);
	result = printf("214 = % .5i", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %+5i", 214);
	printf(" | %i\n", result);
	result = printf("214 = %+5i", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %+05i", 214);
	printf(" | %i\n", result);
	result = printf("214 = %+05i", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("0 = %i", 0);
	printf(" | %i\n", result);
	result = printf("0 = %i", 0);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("-214 = %i", -214);
	printf(" | %i\n", result);
	result = printf("-214 = %i", -214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("-2147483648 = %0.20i", INT_MIN);
	printf(" | %i\n", result);
	result = printf("-2147483648 = %0.20i", INT_MIN);
	printf(" | %i\n", result);
	result = ft_printf("-2147483648 = %020i", INT_MIN);
	printf(" | %i\n", result);
	result = printf("-2147483648 = %020i", INT_MIN);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}

void test_unsigned_int(void)
{
	int	result;

	printf("\n");
	printf("test unsigned int\n--------------------------\n");
	result = ft_printf("4294967295 = %u", UINT_MAX);
	printf(" | %i\n", result);
	result = printf("4294967295 = %u", UINT_MAX);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %u", 214);
	printf(" | %i\n", result);
	result = printf("214 = %u", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %010u", 214);
	printf(" | %i\n", result);
	result = printf("214 = %010u", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %10u", 214);
	printf(" | %i\n", result);
	result = printf("214 = %10u", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %.12u", 214);
	printf(" | %i\n", result);
	result = printf("214 = %.12u", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("0 = %u", 0);
	printf(" | %i\n", result);
	result = printf("0 = %u", 0);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}

void	test_x(void)
{
	int	result;
	unsigned int	unsigned_int_max = 4294967295;

	printf("\n");
	printf("test hexadecimal\n--------------------------\n");
	result = ft_printf("unsigned int max = %x", unsigned_int_max);
	printf(" | %i\n", result);
	result = printf("unsigned int max = %x", unsigned_int_max);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %x", 214);
	printf(" | %i\n", result);
	result = printf("214 = %x", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("0 = %x", 0);
	printf(" | %i\n", result);
	result = printf("0 = %x", 0);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("%#.5x", 0);
	printf(" | %i\n", result);
	result = printf("%#.5x", 0);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %#-18.10x", 214);
	printf(" | %i\n", result);
	result = printf("214 = %#-18.10x", 214);
	printf(" | %i\n", result);
	printf("\n");
	printf("--------------------------\n");
}

void	test_X(void)
{
	int	result;

	printf("\n");
	printf("test HEXADECIMAL\n--------------------------\n");
	result = ft_printf("unsigned int max = %X", UINT_MAX);
	printf(" | %i\n", result);
	result = printf("unsigned int max = %X", UINT_MAX);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %X", 214);
	printf(" | %i\n", result);
	result = printf("214 = %X", 214);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("0 = %X", 0);
	printf(" | %i\n", result);
	result = printf("0 = %X", 0);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}

void	test_purcent_logic(void)
{
	int	result;

	printf("\n");
	printf("test %%\n--------------------------\n");
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
	// result = ft_printf("%k%", 0);
	// printf(" | %i\n", result);
	// result = printf("%k%", 0);
	// printf(" | %i\n", result);
	// printf("\n");
	// result = ft_printf("%kk%", 0);
	// printf(" | %i\n", result);
	// result = printf("%kk%", 0);
	// printf(" | %i\n", result);
	// printf("\n");

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
}

void	test_purcent_crazy()
{
	int	result;

	result = printf("test purcent crazy\n--------------------------\n");

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
// 	printf("--------------------------\n");
 }
// void test_long_int(void)
// {
// 	printf("\n");
// 	printf("test long int\n--------------------------\n");
// 	long	li = 0xffffffffffffffff >> 1; ;
// 	ft_printf("long max = %li\n", li);
// 	printf("long max = %li\n", li);
// 	li = 0x1LL << 63;
// 	ft_printf("long min = %li\n", li);
// 	printf("long min = %li\n", li);
// 	printf("--------------------------\n");
// }

void	test_field_width(void)
{
	int result;

	printf("\n");
	printf("test field width\n--------------------------\n");

	result = printf("int max = %i", INT_MAX);
	printf(" | %i\n", result);
	result = printf("int max = %10i", INT_MAX);
	printf(" | %i\n", result);
	result = printf("int max = %1i", INT_MAX);
	printf(" | %i\n", result);
	result = printf("int max = %20i", INT_MAX);
	printf(" | %i\n", result);
	result = printf("si %s : %.2147483648i n'affiche pas la suite", "overflow", INT_MAX); //2147483648
	printf(" | %i\n", result);
	result = printf("int max = %s", "INT_MAX");
	printf(" | %i\n", result);
	result = printf("int max = %2s", "INT_MAX");
	printf(" | %i\n", result);
	result = printf("int max = %10s", "INT_MAX");
	printf(" | %i\n", result);
	result = printf("int max = %20s", "INT_MAX");
	printf(" | %i\n", result);
	printf("--------------------------\n");
	
}

// void test_precision(void)
// {
// 	int result;

// 	printf("\n");
// 	printf("test precision\n--------------------------\n");
// /**/
// 	result = printf("%kint max = %.006", 0);
// 	printf(" | %i\n", result);
// 	result = printf("int max = %.0i", 0);
// 	printf(" | %i\n", result);
// 	result = printf("int max = %.1i", 0);
// 	printf(" | %i\n", result);
// 	result = printf("int max = %.-1i", 0);
// 	printf(" | %i\n", result);
// 	result = printf("int max = %20.0i", 1);
// 	printf(" | %i\n", result);
// 	result = printf("int max = %20.1i", 12);
// 	printf(" | %i\n", result);
// 	printf("--------------------------\n");
// /**/	
// }

// void	test_flags(void)
// {
// 	int result;
// /**/
// 	printf("\n");
// 	printf("test flags\n--------------------------\n");
// /**/	
// 	unsigned int 	ui = 42;
// 	result = ft_printf("unsigned int 42 = %+u", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+u", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %+d", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+d", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %+i", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+i", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %+x", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+X", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+X", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %+", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+", ui);
// 	printf(" | %i\n", result);
// /**/
// 	printf("\n");
// 	result = ft_printf("unsigned int 42 = %05u", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %05u", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %+05d", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+05d", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %+05d", -ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+05d", -ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %5i", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %5i", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %.5i", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %.5i", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = % .5i", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = % .5i", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %+.5i", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+.5i", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %+.5i", -ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+.5i", -ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %i", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %i", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = % i", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = % i", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %+i", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %+i", ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = % i", -ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = % i", -ui);
// 	printf(" | %i\n", result);
// 	result = ft_printf("unsigned int 42 = %0", ui);
// 	printf(" | %i\n", result);
// 	result = printf("unsigned int 42 = %0", ui);
// 	printf(" | %i\n", result);
// /**/
// 	printf("--------------------------\n");
// }

int	main(void)
{	
	// int	result;

	// result = ft_printf("%k%      00%00#10.lk", 0);
	// printf(" | %i\n", result);
	// result = printf("%k%      00%00#10.lk", 0);
	// printf(" | %i\n", result);
	// result = ft_printf("% wef %");
	// printf(" | %i\n", result);
	// result = printf("% wef %");
	// printf(" | %i\n", result);
	test_char();
	test_str();
	test_ptr();
	test_d();
	test_int();
	test_unsigned_int();
	test_x();
	test_X();
	test_purcent_logic();
	// test_purcent_crazy();
	test_field_width();
	// test_precision();
	// test_flags();

	// printf("sizeof int = %lu\n", sizeof(int));
	// printf("sizeof long = %lu\n", sizeof(long));
	// printf("sizeof long long = %lu\n", sizeof(long));
	// test_long_int();
/*
	signed long long lls = 0xffffffffffffffff;
	printf("0xffffffffffffffff llu = %lld\n", lls);
	
	signed long ls = 0xffffffff;
	
	printf("0xffffffff lu = %ld\n", ls);

	printf("\n");
	int i = 0xffffffff >> 1; ;
	printf("int max = %i\n", i);
	i = 0x1 << 31;
	printf("int min = %i\n", i);
	printf("int min  = %#x\n", i);


	printf("\n");
	long long	lli = 0xffffffffffffffff >> 1; ;
	printf("long long max = %lli\n", lli);
	lli = 0x1LL << 63;
	printf("long long min = %lli\n", lli);
	printf("long long min  = %#llx\n", lli);

	printf("\n");
	int u = 0xffffffff; ;
	printf("unsigned int max = %u\n", u);
	u += 1;
	printf("int min = %u\n", u);
	printf("int min  = %#x\n", u);

	printf("\n");
	unsigned long	lu = 0xffffffffffffffff;
	printf("usigned long max = %lu\n", lu);
	printf("usigned long min = %lu\n", lu + 1L);
	printf("long min  = %#lx\n", lu + 1L);

	printf("\n");
	unsigned long long	llu = 0xffffffffffffffff;
	printf("usigned long max = %llu\n", llu);
	printf("usigned long min = %llu\n", llu + 1L);
	printf("long min  = %#llx\n", llu + 1L);


// */
// 	printf("\n");
}