/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_is_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:39:08 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 16:39:11 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_set_field_right_zero(t_spec *spec, int len_occuped)
{
	if (!spec->flag_zero || (spec->flag_zero && spec->precision > -1))
		return (0);
	if (spec->flag_minus)
		return (0);
	if (spec->width <= len_occuped)
		return (0);
	return (1);
}

int	is_set_field_right_nonzero(t_spec *spec, int len_occuped)
{
	if (spec->flag_zero && spec->precision == -1)
		return (0);
	if (spec->flag_minus)
		return (0);
	if (spec->width <= len_occuped)
		return (0);
	return (1);
}

int	is_set_hexa_hash(t_spec *spec)
{
	if (!spec->flag_hash)
		return (0);
	if (spec->conversion != 'x' && spec->conversion != 'X')
		return (0);
	return (1);
}
