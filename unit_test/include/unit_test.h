/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:26:20 by stephane          #+#    #+#             */
/*   Updated: 2024/01/14 00:28:23 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_TEST_H
# define UNIT_TEST_H

# include "ft_printf.h"
# include <stdio.h>
# include <limits.h>

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define FIRST_FIELD_WIDTH -25

typedef struct s_test{
	int	nbr;
	int	success;
}	t_test;

void	float64_get_integer_part_tests(void);
void	float64_get_decimal_part_tests(void);
void	float64_get_exponent_tests(void);

void	nbr_digit_ui8_tests(void);
void	nbr_digit_ui16_tests(void);
void	nbr_digit_ui32_tests(void);
void	nbr_digit_ui64_tests(void);
void	nbr_digit_float64_integer_part_tests(void);

#endif