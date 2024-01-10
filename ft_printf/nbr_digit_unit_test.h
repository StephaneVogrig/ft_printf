/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_digit_unit_test.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 23:32:00 by stephane          #+#    #+#             */
/*   Updated: 2024/01/10 00:57:05 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef LEN_B_10_UNIT_TEST_H
# define LEN_B_10_UNIT_TEST_H

# include "unit_test.h"
# include "nbr_digit.h"

void	nbr_digit_ui8_tests(void);
void	nbr_digit_ui16_tests(void);
void	nbr_digit_ui32_tests(void);
void	nbr_digit_ui64_tests(void);
void	nbr_digit_float64_integer_part_tests(void);

#endif