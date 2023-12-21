/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specification.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 04:18:57 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 08:45:46 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	specification_init(t_spec *specification)
{
	specification->flag_hash = 0;
	specification->flag_zero = 0;
	specification->flag_minus = 0;
	specification->flag_space = 0;
	specification->flag_plus = 0;
	specification->width = -1;
	specification->precision = -1;
	specification->length[0] = 0;
	specification->length[1] = 0;
	specification->conversion = 0;
}
