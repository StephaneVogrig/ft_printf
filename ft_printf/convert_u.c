/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 22:51:17 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 08:43:16 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_u(va_list args, t_spec *spec, t_buffer *buffer)
{
	char				str[LEN_MAXLONGLONG];
	unsigned long long	ull;
	int					len_nbr;

	ull = ull_from_arg(args, spec);
	if (ull == 0)
		spec->conversion = 'd';
	if (spec->conversion == 'x')
		len_nbr = ull_to_str_hexalower(str, ull);
	else if (spec->conversion == 'X')
		len_nbr = ull_to_str_hexaupper(str, ull);
	else
		len_nbr = ull_to_str_dec(str, ull);
	format_ull(spec, buffer, str, len_nbr);
}
