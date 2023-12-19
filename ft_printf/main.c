/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:03:12 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/19 01:22:58 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	test_char(void)
{
	int	result;

	printf("\n");
	printf("test char\n--------------------------\n");
	result = ft_printf("print %%c a = %c", 'a');
	printf(" | %i\n", result);
	result = printf("print %%c a = %c", 'a');
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
	printf("--------------------------\n");

}
void	test_ptr()
{
	int	result = 0;
	char str[10] = {0,0,0,0,0,0,0,0,0,0};
	char *str_null;

	str_null =  NULL;
	printf("\n");
	printf("test string\n--------------------------\n");
	result = ft_printf("ptr null = %p", str_null);
	printf(" | %i\n", result);
	result = printf("ptr null = %p", str_null);
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
	result = ft_printf("214 = %i", 214);
	printf(" | %i\n", result);
	result = printf("214 = %i", 214);
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
	result = ft_printf("-2147483648 = %i", INT_MIN);
	printf(" | %i\n", result);
	result = printf("-2147483648 = %i", INT_MIN);
	printf(" | %i\n", result);
	printf("--------------------------\n");
}

void test_unsigned_int(void)
{
	int	result;
	unsigned int	unsigned_int_max = UINT_MAX;

	printf("\n");
	printf("test unsigned int\n--------------------------\n");
	result = ft_printf("4294967295 =label[4]; %u", UINT_MAX);
	printf(" | %i\n", result);
	result = printf("4294967295 = %u", UINT_MAX);
	printf(" | %i\n", result);
	printf("\n");
	result = ft_printf("214 = %u", 214);
	printf(" | %i\n", result);
	result = printf("214 = %u", 214);
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
	printf("--------------------------\n");
}

void	test_X(void)
{
	int	result;
	unsigned int	unsigned_int_max = 4294967295;

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
void	test_purcent(void)
{
	int	result;

	printf("\n");
	printf("test %\n--------------------------\n");
	result = ft_printf("%%", 0);
	printf(" | %i\n", result);
	result = printf("%%", 0);
	printf(" | %i\n", result);
	printf("\n");

	result = ft_printf("%", 0);
	printf(" | %i\n", result);
	result = printf("%", 0);
	printf(" | %i\n", result);
	printf("\n");

	result = ft_printf("%%%% = %%");
	printf(" | %i\n", result);
	result = printf("%%%% = %%");
	printf(" | %i\n", result);
	printf("\n");

	result = ft_printf("%k%", 0);
	printf(" | %i\n", result);
	result = printf("%k%", 0);
	printf(" | %i\n", result);
	printf("\n");

	result = ft_printf("%kk%", 0);
	printf(" | %i\n", result);
	result = printf("%kk%", 0);
	printf(" | %i\n", result);
	printf("\n");

	result = ft_printf("\"a la fin %%\" %");
	printf(" | %i\n", result);
	result = printf("\"a la fin %%\" %");
	printf(" | %i\n", result);
	printf("\n");

	result = ft_printf("c%", "Bonjour");
	printf(" | %i\n", result);
	result = printf("c%", "Bonjour");
	printf(" | %i\n", result);
	printf("\n");

	result = ft_printf("ak%", "Bonjour");
	printf(" | %i\n", result);
	result = printf("%s%j", "Bonjour");
	printf(" | %i\n", result);
	printf("\n");

	result = ft_printf("%s%% le monde en%%%kore%c", "Bonjour", '*');
	printf(" | %i\n", result);
	result = printf("%s%% le monde en%%%kore%c", "Bonjour", '*');
	printf(" | %i\n", result);
	printf("\n");

	result = ft_printf("%s%% le monde en%%%kore et %", "Bonjour");
	printf(" | %i\n", result);
	result = printf("%s%% le monde en%%%kore et %", "Bonjour");
	printf(" | %i\n", result);
	printf("\n");
	printf("--------------------------\n");
	printf("diuoxXfFeEgGaAcspn%-+ #0*.hljztL");
}
void test_long_int(void)
{
	printf("\n");
	printf("test long int\n--------------------------\n");
	long	li = 0xffffffffffffffff >> 1; ;
	ft_printf("long max = %li\n", li);
	printf("long max = %li\n", li);
	li = 0x1LL << 63;
	ft_printf("long min = %li\n", li);
	printf("long min = %li\n", li);
	printf("--------------------------\n");
}

void	test_1(void)
{
	int	result;

}


int	main(void)
{
	// test_1();
	// test_char();
	// test_str();
	// test_ptr();
	// test_d();
	// test_int();
	// test_unsigned_int();
	// test_x();
	// test_X();
	test_purcent();


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


*/
	printf("\n");
}
/*

	printf("Bonjour");
	printf("\n");
	ft_printf("Bonjour");
	printf("\n");
	printf("%s", "Bonjour");
	printf("\n");
	//ft_printf("%s", "Bonjour");
	printf("\n");
	ft_printf("bonjour\n");
	ft_printf("%c\n", 'c');
*/