/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_X.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 03:17:48 by stephane          #+#    #+#             */
/*   Updated: 2024/01/05 20:40:41 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	format_X(t_ui64 nbr, t_spec *spec, t_buffer *buffer)
{
	char				str[MAX_DIGIT_HEXA];
	t_nbrstr			nbrstr;

	nbrstr.is_zero = nbr == 0;
	nbrstr.str = ull_to_str_hexaupper(str, nbr);
	nbrstr.len_nbr = str + MAX_DIGIT_HEXA - nbrstr.str;
	if (spec->flag_hash && nbr > 0)
		nbrstr.prefixe = 'X';
	else
		nbrstr.prefixe = 0;
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}
