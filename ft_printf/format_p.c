/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:20:44 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 13:43:32 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_p(void *p, t_spec *spec, t_buffer *buffer)
{
	char				str[LEN_MAXLONGLONG];
	unsigned long long	ull;
	int					len_str;

	if (!p)
	{
		if (!spec->flag_minus && spec->width > 5)
			buffer_add_char(buffer, ' ', spec->width - 5);
		buffer_add_str(buffer, "(nil)", 5);
		if (spec->flag_minus && spec->width > 5)
			buffer_add_char(buffer, ' ', spec->width - 5);
	}
	else
	{
		ull = (unsigned long long)p;
		len_str = ull_to_str_hexalower(str, ull);
		spec->flag_hash = '#';
		spec->conversion = 'x';
		format_ull(spec, buffer, str, len_str);
	}
	return (1);
}
