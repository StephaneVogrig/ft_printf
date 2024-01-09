/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrstr_to_buffer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 01:16:42 by stephane          #+#    #+#             */
/*   Updated: 2024/01/09 16:12:35 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

void	prefixe_to_buffer(t_buffer *buffer, char prefixe)
{
	if (prefixe == 'x')
		buffer_add_str(buffer, "0x", 2);
	else if (prefixe == 'X')
		buffer_add_str(buffer, "0X", 2);
	else if (prefixe)
		buffer_add_char(buffer, prefixe, 1);	
}

static void	compute_lengths(t_spec *spec, t_nbrstr *ns)
{
	if (spec->precision > -1)
		spec->flag_zero = 0;
	if (ns->is_zero && spec->precision == 0)
		ns->len_nbr = 0;
	if (spec->precision > ns->len_nbr)
		spec->precision -= ns->len_nbr;
	else
		spec->precision = 0;		
	spec->width -= ns->len_nbr + spec->precision;
	if (ns->prefixe == 'x' || ns->prefixe == 'X')
		spec->width -= 2;
	if (ns->prefixe == '+' || ns->prefixe == '-' || ns->prefixe == ' ')
		spec->width -= 1;
	if (spec->width < 0)
		spec->width = 0;
}

void	nbrstr_to_buffer(t_buffer *buffer, t_spec *spec, t_nbrstr *ns)
{
	compute_lengths(spec, ns);
	if (spec->right_align && spec->width && !spec->flag_zero)
		buffer_add_char(buffer, ' ', spec->width);
	if (ns->prefixe)
		prefixe_to_buffer(buffer, ns->prefixe);
	if (spec->right_align && spec->width && spec->flag_zero)
		buffer_add_char(buffer, '0', spec->width);
	if (spec->precision)
		buffer_add_char(buffer, '0', spec->precision);
	buffer_add_str(buffer, ns->str, ns->len_nbr);
	if (spec->left_align && spec->width)
		buffer_add_char(buffer, ' ', spec->width);
}