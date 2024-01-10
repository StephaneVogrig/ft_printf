/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_X.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 03:17:48 by stephane          #+#    #+#             */
/*   Updated: 2024/01/10 13:11:39 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

int	format_X(t_ui64 nbr, t_spec *spec, t_buffer *buffer)
{
	char				str[MAX_DIGIT_HEXA];
	t_nbrstr			nbrstr;

	nbrstr.is_zero = nbr == 0;
	nbrstr.str = ui64_to_str_hexaupper(str, nbr);
	nbrstr.nbr_digit = str + MAX_DIGIT_HEXA - nbrstr.str;
	if (spec->flag_hash && nbr > 0)
		spec->prefix = 'X';
	else
		spec->prefix = '\0';
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}
