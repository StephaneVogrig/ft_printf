/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_f.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:26:36 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 10:13:20 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"
#include <stdio.h>

t_round	compute_round(double nbr, int precision)
{
// printf("start compute round\n"); // debug
	t_round	round;
	int		digit;
	int		i;

	round.nbr_digit = 0;
	round.intpart = nbr >= 0.5;
	round.decpart = 0;
	if (precision == 0)
		return (round);
	i = precision;
	while (i--)
	{
		nbr *= 10;
		digit = (int)nbr;
		nbr -= digit;
		if (digit < 9)
			round.nbr_digit = 0;
		else
			round.nbr_digit++;	
// printf("i %i, n %.40f, digit %i, nbr digit round %i\n", i, nbr, digit, round.nbr_digit); // debug
	}
	round.decpart = nbr >= 0.5;
	round.intpart = round.decpart && round.nbr_digit == precision;
	if (round.decpart == 0)
		round.nbr_digit = 0;
printf("round : intpart %i, decpart %i, nbr_digit %i\n", round.intpart, round.decpart, round.nbr_digit); // debug
	return (round);
}

int	nbr_digit_intpart(double nbr)
{
	int	i;

	i = 1;
	while(nbr >= 10)
	{
// printf("nbr %f, nbr digit int %i\n", nbr, i); // debug
		nbr /= 10;
		i++;
	}
	return (i);
}

double	integer_to_buffer(double n, int power10, t_buffer *buffer)
{
	// printf("start integer to buffer\n"); // debug
// printf("nbr    %f, power10 %i\n", nbr, power10); // debug
	int 		digit;
	t_float128	ten_power;
	t_float128	nbr;

	nbr = n;
	ten_power = vs_pow(power10);
	
// printf("ten_power %Lf, nbr >= 10 = %i, result = %Lf\n", ten_power, nbr >= 10, vs_pow(power10)); // debug
	while (nbr >= 10)
	{
printf("nbr       %Lf\n", nbr); // debug
printf("ten power %Lf\n", ten_power); // buffer


		digit =  nbr / ten_power;
printf("digit %Lf\n", nbr); // debug
		buffer_add_char(buffer, digit + '0', 1);
		nbr -= (digit * ten_power);
printf("di * pow  %Lf\n", nbr); // debug
		
		ten_power /= 10;
printf("nbr       %Lf\n", nbr); // debug
printf("ten power %Lf\n", ten_power); // buffer
		if (ten_power == 0)
			break;
	}
	digit = nbr;
	buffer_add_char(buffer, digit + '0', 1);
	nbr -= digit;
	return (nbr);
}

void	decimal_to_buffer(double nbr, int precision, t_round round, t_buffer *buffer)
{
	// printf("start decimal to buffer\n"); // debug
	int	digit;
	t_float128 n;
	
	n = nbr;
	precision -= round.nbr_digit;
	while (precision--)
	{
	// printf("nbr:%.30Lf, precision %i, nbr digit round %i\n", n, precision, round.nbr_digit); // debug
	// printf("nbr:%.30f\n", (n * 10) / 10); // debug
		n *= 10;
		digit = (int)n;
		n -= digit;
		if (precision == 0)
			buffer_add_char(buffer, digit + (n >= 0.5) + '0', 1);
		else
			buffer_add_char(buffer, digit + '0', 1);
	}
	if (round.nbr_digit)
		buffer_add_char(buffer, '0', round.nbr_digit);
}


void	dot_to_buffer(t_spec *spec, t_buffer *buffer)
{
	if (spec->precision > 0 || spec->flag_hash)
		buffer_add_char(buffer, '.', 1);
}

void	double_to_buffer(t_float64 nbr, t_spec *spec, t_buffer *buffer)
{
	// printf("start double to buffer\n"); // debug
	int			nbr_digit_int;
	t_round		round;
	t_float64	decimal;
	
	nbr_digit_int = nbr_digit_intpart(nbr);
// printf("nbr_digit_int %i\n", nbr_digit_int); // debug
	round = compute_round(nbr, spec->precision);
	// printf("%i\n", round);
	
	// printf("f %f\n", n.f);
	field_compute_empty_float(spec, nbr_digit_int);
	field_empty_before_to_buffer(spec, buffer);
// printf("nbr_digit_int %i\n", nbr_digit_int); // debug
	decimal = integer_to_buffer(nbr + round.intpart, nbr_digit_int - 1, buffer);
// printf("nbr %.30f, dec part %.30f, nbr digit int %i\n", nbr, decimal, nbr_digit_int); // debug

	dot_to_buffer(spec, buffer);
	// printf("f %f\n", n.f);
	decimal_to_buffer(decimal, spec->precision, round, buffer);
	field_empty_after_to_buffer(spec, buffer);
}

int	format_f(t_float64 nbr, t_spec *spec, t_buffer *buffer)
{
	// printf("start format_f\n"); // debug
	// printf("n = %f\n", nbr); // debug
	if (nbr < 0)
	{
		spec->prefix = '-';
		nbr *= -1.0;
	}
	if (float64_get_exponent(nbr) == FLOAT_MAX_EXPONENT)
	{
		if (float64_get_mantissa(nbr))
			return (format_s_float("nan", spec, buffer));
		return (format_s_float("inf", spec, buffer));	
	}
	if (spec->precision == -1)
		spec->precision = 6;
	double_to_buffer(nbr, spec, buffer);
	return (1);	
}

