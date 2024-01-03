/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:01:11 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/03 06:11:36 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

static int	format_i_min(t_spec *spec, t_buffer *buffer)
{
	t_nbrstr	nbrstr;
	
	nbrstr.is_zero = FALSE;
	nbrstr.str = "9223372036854775808";
	nbrstr.len_nbr = 19;
	nbrstr.prefixe = '-';
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}

static int	format_i_neg(long long nbr, t_spec *spec, t_buffer *buffer)
{
	char		str[LEN_MAXLONGLONG];
	t_nbrstr	nbrstr;
	
	nbrstr.is_zero = FALSE;
	nbrstr.str = ull_to_str_dec(str, -nbr);
	nbrstr.len_nbr = str + LEN_MAXLONGLONG - nbrstr.str;
	nbrstr.prefixe = '-';
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}

static int	format_i_pos(long long nbr, t_spec *spec, t_buffer *buffer)
{
	char		str[LEN_MAXLONGLONG];
	t_nbrstr	nbrstr;
	
	nbrstr.is_zero = nbr == 0;
	nbrstr.str = ull_to_str_dec(str, nbr);
	nbrstr.len_nbr = str + LEN_MAXLONGLONG - nbrstr.str;
	if (spec->flag_plus)	
		nbrstr.prefixe = '+';
	else if (spec->flag_space)	
		nbrstr.prefixe = ' ';
	else
		nbrstr.prefixe = 0;
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}

int	format_i(long long nbr, t_spec *spec, t_buffer *buffer)
{
	if (nbr == LLONG_MIN)
		return(format_i_min(spec, buffer));
	if (nbr < 0)
		return (format_i_neg(nbr, spec, buffer));
	return (format_i_pos(nbr, spec, buffer));
}
