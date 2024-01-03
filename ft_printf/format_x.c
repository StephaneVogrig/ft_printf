/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:52:36 by stephane          #+#    #+#             */
/*   Updated: 2024/01/03 04:05:50 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	format_x(unsigned long long nbr, t_spec *spec, t_buffer *buffer)
{
	char				str[MAX_DIGIT_HEXA];
	t_nbrstr			nbrstr;

	nbrstr.is_zero = nbr == 0;
	nbrstr.str = ull_to_str_hexalower(str, nbr);
	nbrstr.len_nbr = str + MAX_DIGIT_HEXA - nbrstr.str;
	if (spec->flag_hash && nbr > 0)
		nbrstr.prefixe = 'x';
	else
		nbrstr.prefixe = 0;
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}
