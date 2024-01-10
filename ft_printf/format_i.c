/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:01:11 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/10 13:09:10 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

static int	format_i_min(t_spec *spec, t_buffer *buffer)
{
	t_nbrstr	nbrstr;
	
	nbrstr.is_zero = FALSE;
	nbrstr.str = "9223372036854775808";
	nbrstr.nbr_digit = 19;
	spec->prefix = '-';
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}

static int	format_i_negative(long long nbr, t_spec *spec, t_buffer *buffer)
{
	char		str[LEN_MAXLONGLONG];
	t_nbrstr	nbrstr;
	
	nbrstr.is_zero = FALSE;
	nbrstr.str = ui64_to_str_dec(str, -nbr);
	nbrstr.nbr_digit = str + LEN_MAXLONGLONG - nbrstr.str;
	spec->prefix = '-';
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}

static int	format_i_positive(t_ui64 nbr, t_spec *spec, t_buffer *buffer)
{
	char		str[LEN_MAXLONGLONG];
	t_nbrstr	nbrstr;
	
	nbrstr.is_zero = nbr == 0;
	nbrstr.str = ui64_to_str_dec(str, nbr);
	nbrstr.nbr_digit = str + LEN_MAXLONGLONG - nbrstr.str;
	if (spec->flag_plus)	
		spec->prefix = '+';
	else if (spec->flag_space)	
		spec->prefix = ' ';
	else
		spec->prefix = '\0';
	nbrstr_to_buffer(buffer, spec, &nbrstr);
	return (1);
}

int	format_i(t_int64 nbr, t_spec *spec, t_buffer *buffer)
{
	if (nbr == LLONG_MIN)
		return(format_i_min(spec, buffer));
	if (nbr < 0)
		return (format_i_negative(nbr, spec, buffer));
	return (format_i_positive(nbr, spec, buffer));
}
