/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:26:36 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 10:17:01 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"
#include <stdio.h>

void	print_float64_to_binary(t_ui64 nbr);

t_round	compute_round(double n, int precision)
{
	// printf ("new n : %i n : %.20f \n", (int)n, (0.87650894255-0.8765089425)*10000000000);
	
	t_round	round;
	int		i;
	int		digit;
	double	dec;
	double	mul;

	// to debug
	// print_float64_to_binary(f.ui);
	// printf("\n");
	
	dec = 0.0;
	mul = 1;
	i = precision ;
	// printf ("int n : %i n : %.20f \n", (int)n, n);
	round.nbr_digit = 0;
	round.intpart = (int)(n * 10) > 4;
	round.decpart = 0;
	// printf ("round.nbr_digit : %i, precision : %i, round.intpart : %i, round.decpart : %i\n", round.nbr_digit, precision, round.intpart, round.decpart);
	
	if (precision == 0)
		return (round);
	// printf("n         = %.20f\n", n);
	// printf("n         = %.40f\n", n);

	u_float64 vm;
	u_float64 vd;
	
	vm.f = 0.0;
	vd.f = 0.0;
	
		u_float64	em;
		u_float64	ed;
	while (i--)
	{
	// printf ("int n : %i n : %.20f \n", (int)n, n);
		// printf("n * mul %f\n", n * mul);
		// printf("vf      %f\n", vf);
		// printf("n   = %.40f, n   = %.40f, n   = %.40f\n", n, n, n); // debug
		// printf("vu.f % .40f, vm.f % .40f, vd.f % .40f\n",vu.f, vm.f, vd.f); // debug
		mul *= 10;
		dec *= 10;
		// printf("n = %.20f, digit = %i, dec = %25f, mul = %25f\n", n, digit, dec, mul);
		// digit = (int)(n * mul - dec);
		digit = (int)((n - (dec / mul)) * mul);
		// double ecart_u =((dec + digit + 1) / mul) - n;
		// double ecart = ((dec + digit) / mul) - n;
		// double ecart_d = ((dec + digit - 1) / mul) - n;
 		// printf("dec / mul = %.20f, dec %25f, d %i, eu % e, e % e, ed % e, diff % .30f\n", dec / mul, dec, digit, ecart_u, ecart, ecart_d, diff);
	
		// diff = n - (vf / mul);
		double diff;
		diff = n - vm.f;
		int dig = (int)(diff * mul);



		// printf("vm.f % .40f diff % .40f, mul %26f, dig %i, vf %26f\n",vm.f, diff, mul, dig, vf); // debug
		// printf("vf/m  %.40f, diff  %.40f, dig %i\n", vf / mul, diff, dig); // debug
		vm.f = (dec + dig) / mul;
		vd.f = ((dec + dig - 1) / mul);
		// printf("vu.f % .40f, vm.f % .40f, vd.f % .40f\n",vu.f, vm.f, vd.f); // debug

		
		
		// vu.f += (dig + 1) / mul;
		// vm.f += dig / mul;
		// vd.f += (dig - 1) / mul;

		em.f = n - vm.f;
		ed.f = n - vd.f;
		
		// printf("n   = %.40f, n   = %.40f, n   = %.40f\n", n, n, n); // debug
		// printf("eu.f % .40f, em.f % .40f, ed.f % .40f\n",eu.f, em.f, ed.f); // debug
		
		if (em.f < 0)
		{
			// print_float64_to_binary(vm.ui); // debug
			// printf(" | %.40f\n", vm.f); // debug
			dig--;
			vm.f = vd.f;
		}
		int imant = 0;
		if (ed.f == 0)
		{
			// print_float64_to_binary(vm.ui); // debug
			// printf(" | %.40f\n", vm.f); // debug
			dig--;
			while (em.f == 0)
			{
				vm.mant--;
				em.f = n - vm.f;
				imant--;
			}
			// printf("imant %i\n", imant);
			// vm.mant = 1;
			// print_float64_to_binary(vm.ui); // debug
			// printf(" | %.40f\n", vm.f); // debug
		}
		if (dig > 9)
			dig = 0;
		dec += digit ;
		
		// vu.f = ((vf + dig + 2) / mul);
		// vm.f = ((vf + dig + 1) / mul);
		// vd.f = ((vf + dig) / mul);
		// printf("vu.f % .40f, vm.f % .40f, vd.f % .40f\n",vu.f, vm.f, vd.f); // debug
		// printf("eu.f % .40f, em.f % .40f, ed.f % .40f\n",eu.f, em.f, ed.f); // debug
		// int dtemp = dig;
		// if (em.f > eu.f)
		// {
		// 	vm.f = vu.f;
		// 	dtemp = dig + 1;
		// }
		// if (em.f >= ed.f)
		// {
		// 	vm.f = vd.f;
		// 	dtemp = dig - 1;
		// }
		// dig = dtemp;
		// printf("dig %i\n\n", dig); // debug
		
		// vm.f += em.f;
		// printf("dig % i, em.f % .30f, vm.f % .30f\n", dig, em.f, vm.f); // debug
		// printf("vf / mu   = %.20f, vf  %25f, d %i, eu % e, e % e, ed % e, diff % .30f\n", vf / mul, vf, dig, eu.f, em.f, ed.f, diff);
		
			

		
		// int digit2 = (int)((n - (dec / mul)) * mul);
		// printf("n * mul %60.20f, dec %60f, d %i, d2 %i\n", n * mul, dec, digit, digit2);
		// printf("n = %.20f, digit = %i, dec = %25f, mul = %25f\n", n, digit, dec, mul);
		// printf("n * mul = %.30f\n", n - ((n * mul) / mul));
		// double diff1 = (n * mul) / mul;
		// printf("n * mul = %.30f\n", (dec / mul) - n);
		// printf("n * mul = %.30f\n", ((dec + 1) / mul) - n);
		if (digit < 9)
			round.nbr_digit = 0;
		else
			round.nbr_digit++;	
	}
	
	// printf("n   = %.40f, n   = %.40f, n   = %.40f\n", n, n, n);
	// ft_printf("\n");
	
		// mul *= 10;
		// dec *= 10;
		// digit = (int)((n - (dec / mul)) * mul);
		// ft_printf("%i", digit);
		
	// u_float64	f;
	// f.f = n;
	// print_float64_to_binary(f.ui);
	// printf(" | %.40f\n", f.f);
	// // f.f *= mul;
	// // f.f /= mul;
	// f.f = (f.f * mul) / mul;
	// print_float64_to_binary(f.ui);
	// printf(" | %.40f\n", f.f);
	// f.f = (n - f.f) * mul;
	// print_float64_to_binary(f.ui);
	// printf(" | %.40f\n", f.f);
	// f.f = (n - ((f.f * mul) / mul)) * mul;
	// print_float64_to_binary(f.ui);
	// printf(" | %.40f\n", f.f);
	// printf("n = %.20f, digit = %i, dec = %25f, mul = %25f\n", n, digit, dec, mul);
	// n > (dec / mul)
	// printf("n * mul =  %.40f\n", n * mul);
	// printf("dec     =  %.40f\n", dec);
	// printf("dif     =  %.40f\n", n * mul - dec);

	// printf("dec / mul  =  %.40f\n", dec / mul);
	// printf("n          =  %.40f\n", n);
	// printf("dif        =  %.40f\n", n - dec / mul);
	// printf("dif * mul  =  %.40f\n", (n - dec / mul) * mul);
	
	// if ((n * mul - dec) >= 0.5)
	// 	round.decpart = 1;
	if (((n - dec / mul) * mul) >= 0.5)
		round.decpart = 1;
	// printf("round dec = %i", round.decpart);
	
	// digit = (int)(n * mul - dec);
	// round.decpart = digit > 4;
	// printf ("digit = %i\n", digit);
	
	if (round.decpart == 0 || round.nbr_digit < precision)
			round.intpart = 0;
	// printf ("round.nbr_digit : %i, precision : %i, round.intpart : %i, round.decpart : %i\n", round.nbr_digit, precision, round.intpart, round.decpart);
	return (round);
}

int	nbr_digit_intpart(double d)
{
	int	i;

	i = 1;
	while((int)d > 9)
	{
		d /= 10;
		i++;
	}
	return (i);
}

double	integer_to_buffer(double n, int power10, t_buffer *buffer)
{
	int digit;
	double	ten_power;

	ten_power =  sv_pow(10, power10);
	while ((int)n > 9)
	{
		digit =  n / ten_power;
		buffer_add_char(buffer, digit + '0', 1);
		n -= (digit * ten_power);
		ten_power /= 10;
	}
	digit = n;
	buffer_add_char(buffer, digit + '0', 1);
	n -= digit;
	return (n);
}

void	decimal_to_buffer(double n, int precision, t_round round, t_buffer *buffer)
{
	int	digit;
	double	dec;
	double	mul;
	u_float64 vm;
	u_float64 vd;
	u_float64	em;
	u_float64	ed;
	
	dec = 0.0;
	mul = 1;
	vm.f = 0.0;
	vd.f = 0.0;
	
	// printf("nbr digit %i\n", nbr_digit_round);
	// printf ("n : %.20f\n", n);
	if (round.decpart == 0)
		round.nbr_digit = 0;
	precision -= round.nbr_digit;
	while (precision--)
	{
		mul *= 10;
		dec *= 10;
		digit = (int)(n * mul - dec);
		dec += digit ;
		
		double diff;
		diff = n - vm.f;
		int dig = (int)(diff * mul);
		vm.f = (dec + dig) / mul;
		vd.f = ((dec + dig - 1) / mul);
		em.f = n - vm.f;
		ed.f = n - vd.f;
		
		
		if (em.f < 0)
		{
			dig--;
			vm.f = vd.f;
		}
		int imant = 0;
		if (ed.f == 0)
		{
			dig--;
			while (em.f == 0)
			{
				vm.mant--;
				em.f = n - vm.f;
				imant--;
			}
		}
		if (dig > 9)
			dig = 0;
		dec += digit ;


		if (precision == 0)
			buffer_add_char(buffer, digit + round.decpart + '0', 1);
		else
			buffer_add_char(buffer, digit + '0', 1);

	/*
		n *= 10;
	// printf ("int n : %i n : %.20f round.decpart : %i\n", (int)n, n, round.decpart);
		if (precision == 0)
			buffer_add_char(buffer, (int)n + round.decpart + '0', 1);
		else
			buffer_add_char(buffer, (int)n + '0', 1);
		n -= (int)n;	*/		
	}
	if (round.nbr_digit)
		buffer_add_char(buffer, '0', round.nbr_digit);
}


void	dot_to_buffer(t_spec *spec, t_buffer *buffer)
{
	if (spec->precision > 0 || spec->flag_hash)
		buffer_add_char(buffer, '.', 1);
}

void	double_to_buffer(u_float64 n, t_spec *spec, t_buffer *buffer)
{
	int	nbr_digit_int;
	t_round	round;
	
	nbr_digit_int = nbr_digit_intpart(n.f);
	
	u_float64 f_dec;
	f_dec = n;
	// printf("f_dec %f\n", f_dec.f);
	int p = n.exp_b - 1023;
	if (p == 0)
		f_dec.f -= (int)f_dec.f;
	if (p > 0)
	{
		f_dec.exp_b -= p;
		f_dec.mant <<= p;
	// printf("f_dec %f\n", f_dec.f);
		f_dec.f -= 1;
	// printf("f_dec %f\n", f_dec.f);
	}
	
	round = compute_round(f_dec.f, spec->precision);
	// printf("f_dec.f %f\n", f_dec.f);
	// printf("%i\n", round);
	
	// printf("f %f\n", n.f);
	field_compute_empty_float(spec, nbr_digit_int);
	field_empty_before_to_buffer(spec, buffer);
	n.f = integer_to_buffer(n.f + round.intpart, nbr_digit_int - 1, buffer);
	dot_to_buffer(spec, buffer);
	// printf("f %f\n", n.f);
	decimal_to_buffer(n.f, spec->precision, round, buffer);
	field_empty_after_to_buffer(spec, buffer);
}

int	format_f(double nbr, t_spec *spec, t_buffer *buffer)
{
	u_float64	f;
	
	f.f = nbr;
	if (f.sign)
	{
		spec->prefix = '-';
		f.f *= -1;
	}
	if(f.exp_b == 2047)
	{
		if (f.mant)
			return (format_s_float("nan", spec, buffer));
		return (format_s_float("inf", spec, buffer));	
	}
	if (spec->precision == -1)
		spec->precision = 6;
	double_to_buffer(f, spec, buffer);
	return (1);	
}

