/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 20:16:42 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 06:18:22 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "unit_test.h"

#include "nbr_digit_unit_test.h"
#include "float_tests.h"

int	main(void)
{
	nbr_digit_ui8_tests();
	nbr_digit_ui16_tests();
	nbr_digit_ui32_tests();
	nbr_digit_ui64_tests();
	// float_get_integer_part_tests();
	float64_get_exponent_tests();
}