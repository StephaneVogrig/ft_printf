/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:32:09 by stephane          #+#    #+#             */
/*   Updated: 2024/01/13 15:39:35 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <stdio.h>
# include "ft_printf.h"

void	tests_char(void);
void	tests_d(void);
void	tests_field_width(void);
void	tests_field_width_etoile(void);
void	tests_flags(void);
void	tests_f(void);
void	tests_hi(void);
void	tests_i(void);
void	tests_il(void);
void	tests_ill(void);
void	tests_precision(void);
void	tests_precision_etoile(void);
void	tests_ptr(void);
void	tests_purcent(void);
void	tests_str(void);
void	tests_u(void);
void	tests_ul(void);
void	tests_ull(void);
void	tests_warning(void);
void	tests_x(void);
void	tests_X(void);
void	tests_spec_without_conversion(void);
void	double_to_float64_tests(void);

#endif
