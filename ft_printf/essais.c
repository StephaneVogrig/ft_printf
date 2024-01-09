/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   essais.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:02:52 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 05:55:53 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"
#include <stdio.h>

#define LOG10_2 0.30102999566398

typedef unsigned int t_ui32;
typedef unsigned long int t_ui64;

typedef	union u_double{
	double	f;
	unsigned long int u;
	union {
		unsigned long int frac : 52;
		unsigned long int exp : 11;
		unsigned long int sign : 1;
	};
}	t_double;

int	log10_2x(int n)
{
	return ((int)((double)(n + 0) *LOG10_2));
	// return ((n* 732923) >> 20);
}
void	test_log10_2x(void)
{
	t_double d;

	d.f = 1e2;
	d.f = 9.0;

	int exp = (int)((d.u << 1) >> 53) - 1023;
	
	printf("valeur %e, exposant %i, exp %i\n", d.f, log10_2x(exp), exp);
	
	
	// while (i++ < 1024)
	// {
	// 	printf("i:%5i | %-5i |%i\n", i, log10_2x(i), 0x1 << i);
	// }
	
	
}

void	print_ui32_to_binary(t_ui32 nbr)
{
	int	i;
	
	i = 32;
	while (i--)
	{
		printf("%u", (nbr >> i) & 0x1);
		if (!(i % 8))
			printf(" ");
	}
}

void	print_ui64_to_binary(t_ui64 nbr)
{
	int	i;
	
	i = 64;
	while (i--)
	{
		printf("%lu", (nbr >> i) & 0x1);
		if (!(i % 8))
			printf(" ");
	}
}

void	print_float64_to_binary_essai(t_ui64 nbr)
{
	int	i;
	
	i = 64;
	while (i--)
	{
		ft_printf("%lu", (nbr >> i) & 0x00000001);
		if (i == 64 - 1 || i == 64 - 12)
			ft_printf(" ");
	}
}


typedef	union u_double2{
	double	f;
	t_ui64	u;
	struct {
		t_ui64 mant	: 52;
		t_ui32 exp_b: 11;
		t_ui32 sign	: 1;
	};
}	u_double2;

void	double_to_float64_tests(void)
{
	t_double d;
	
	d.f = 0.99999999999999999;
	// print_float64_to_binary(d.u);
	printf(" | %f\n", d.f);
	print_ui64_to_binary(d.u);
	printf(" | %f\n", d.f);
	
	u_double2	d2;
	
	d2.f = 2.9999999999999989999999;
	printf("\n");
	// print_float64_to_binary(d2.u);
	printf(" | %.22f\n", d2.f);
	print_ui32_to_binary(d2.sign);
	printf(" | %i\n", d2.sign);
	print_ui32_to_binary(d2.exp_b);
	printf(" | %i\n", d2.exp_b);
	print_ui64_to_binary(d2.mant);
	printf(" | %lu\n", (t_ui64)d2.mant);
	
	d2.f = -1.1;
	d2.exp_b = 2047;
	printf("\n");
	print_ui64_to_binary(d2.u);
	printf(" | %f\n", d2.f);
	print_ui32_to_binary(d2.sign);
	printf(" | %i\n", d2.sign);
	print_ui32_to_binary(d2.exp_b);
	printf(" | %i\n", d2.exp_b);
	print_ui64_to_binary(d2.mant);
	printf(" | %lu\n", (t_ui64)d2.mant);
	
	d2.f = -1;
	d2.exp_b = 2047;
	printf("\n");
	print_ui64_to_binary(d2.u);
	printf(" | %f\n", d2.f);
	print_ui32_to_binary(d2.sign);
	printf(" | %i\n", d2.sign);
	print_ui32_to_binary(d2.exp_b);
	printf(" | %i\n", d2.exp_b);
	print_ui64_to_binary(d2.mant);
	printf(" | %lu\n", (t_ui64)d2.mant);
	
}

#define E_18 1000000000000000000
void	essais_float(void)
{
	t_double	d;
	
	// d.f = 1;
	// print_ul_to_binary(d.u);
	// printf(" | %f\n", d.f);
	// d.f = -1;
	// print_ul_to_binary(d.u);
	// printf(" | %f\n", d.f);
	// d.f = 9.999999e307;
	// print_ul_to_binary(d.u);
	// printf(" | %e\n", d.f);
	// printf("%f\n", d.f);
	// d.f /= 1e72;
	// print_ul_to_binary(d.u);
	// printf(" | %e\n", d.f);

	d.f = 9.9999999999e120;
	int	i;
	
	double dd;

	dd = d.f;
	i = 0;
	while(dd >= 10)
	{
		dd /= 10;
		i++;
	}
	printf("exp %i\n", i);
	double power10;
	power10 = 10;
	while (--i)
		power10 *= 10;
	int digit;
	digit = dd;
	printf("power10 %e\n", power10);
	// printf("%i", digit);
	dd = d.f;
	while ((int)dd > 9)
	{
		printf("%i", digit);	
		dd -= (digit * power10);
		power10 /= 10;
		digit =  dd / power10;
	}

	
	printf("%f\n", dd);
	printf("%f\n", d.f);
	print_ui64_to_binary(d.u);
	printf("\n");
	int	sign = (int)(d.u >> 63);
	int exp = (int)((d.u << 1) >> 53) - 1023;
	t_ui64 mant = (unsigned long int)d.frac;
	printf("sign = %i, exp = %i, mantisse = %lu\n",sign, exp, mant);
	// print_sizeof_all_type();
	// test_log10_2x();
	




	
	// t_double exp;
	// t_double d2;
	// t_double d3;
	// t_double d4;
	// exp.f = 100.0;
	// d3.f = d.f;
	// while (d.f >= E_18)
	// {	
	// 	d.f = d.f / 100;
	// 	print_ul_to_binary(d.u);
	// 	printf(" | %f\n", d.f);
	// 	d4.f = (d.f / 10) * 10;
	// 	print_ul_to_binary(d4.u * 10);
	// 	printf(" | %f\n", d4.f);
	// 	d2.f = d3.f / exp.f;
	// 	print_ul_to_binary(d2.u);
	// 	printf(" | %f\n\n", d2.f);
	// 	exp.f *= 100;
	// }
	
}