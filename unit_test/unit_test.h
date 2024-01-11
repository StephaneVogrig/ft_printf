/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 22:26:20 by stephane          #+#    #+#             */
/*   Updated: 2024/01/11 03:41:36 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef UNIT_TEST_H
# define UNIT_TEST_H

# include <stdio.h>
# include <limits.h>
# include "../libft_printf/include/ft_printf.h"
# include "nbr_digit_unit_test.h"
# include "float_tests.h"

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define FIRST_FIELD_WIDTH -15

typedef struct s_test{
	int	nbr;
	int	success;
}	t_test;

int	unit_test(void);

#endif