/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:12:55 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/03 05:17:29 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	format_u(unsigned long long nbr, t_spec *spec, t_buffer *buffer)
{
	char				str[LEN_MAXLONGLONG];
	t_nbrstr			nbrstr;

	nbrstr.is_zero = nbr == 0;
	nbrstr.str = ull_to_str_dec(str, nbr);
	nbrstr.len_nbr = str + LEN_MAXLONGLONG - nbrstr.str;
	nbrstr.prefixe = 0;
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}
