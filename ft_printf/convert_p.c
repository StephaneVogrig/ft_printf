/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:20:44 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 05:41:55 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_p(void *p, t_spec *spec, t_buffer *buffer)
{
	char				str[LEN_MAXLONGLONG];
	unsigned long long	ull;
	int					len_str;

	if (!p)
	{
		buffer_add_str(buffer, "(nil)", 5);
	}
	else
	{
		ull = (unsigned long long)p;
		len_str = ull_to_str_hexalower(str, ull);
		format_ull(spec, buffer, str, len_str);
	}
}
