/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 20:16:42 by stephane          #+#    #+#             */
/*   Updated: 2024/01/13 16:00:40 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unit_test.h"

int	main(void)
{
	nbr_digit_ui8_tests();
	nbr_digit_ui16_tests();
	nbr_digit_ui32_tests();
	nbr_digit_ui64_tests();
	// float_get_integer_part_tests();
	// float64_get_exponent_tests();
	nbr_digit_float64_integer_part_tests();
}