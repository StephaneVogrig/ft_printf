/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:33:14 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 19:38:42 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	buffer_print(t_buffer buffer)
{
	return (write(1, buffer.data, buffer.offset) + buffer.writed);
}

/*	Copy n characters c in buffer and update buffer.offset.                   */
/*	If buffer is full, it is flush by write.                                  */
void	buffer_add_char(t_buffer *buffer, char c, int n)
{
	while (n--)
	{
		buffer->data[buffer->offset++] = c;
		if (buffer->offset == BUFFER_SIZE)
		{
			buffer->writed += write(1, buffer->data, BUFFER_SIZE);
			buffer->offset = 0;
		}
	}
}

/*	Copy n first characters of str in buffer and update buffer.offset.        */
/*	If buffer is full, it is flush by write.                                  */
void	buffer_add_str(t_buffer *buffer, char *str, size_t n)
{
	while (n--)
	{
		buffer->data[buffer->offset++] = *str++;
		if (buffer->offset == BUFFER_SIZE)
		{
			buffer->writed += write(1, buffer->data, BUFFER_SIZE);
			buffer->offset = 0;
		}
	}
}

void	buffer_add_nbr(t_buffer *buffer, unsigned long long ull)
{
	char	str[LEN_MAXLONGLONG];
	int		len_nbr;

	len_nbr = ull_to_str_dec(str, ull);
	buffer_add_str(buffer, str + LEN_MAXLONGLONG - len_nbr, len_nbr);
}

int	buffer_add_spec(t_buffer *buffer, t_spec *spec)
{
	buffer_add_char(buffer, '%', 1);
	if (spec->flag_hash)
		buffer_add_char(buffer, '#', 1);
	if (spec->flag_plus)
		buffer_add_char(buffer, '+', 1);
	if (spec->flag_space && !spec->flag_plus)
		buffer_add_char(buffer, ' ', 1);
	if (spec->flag_minus)
		buffer_add_char(buffer, '-', 1);
	if (spec->flag_zero && !spec->flag_minus)
		buffer_add_char(buffer, '0', 1);
	if (spec->width > -1)
		buffer_add_nbr(buffer, (unsigned long long)spec->width);
	if (spec->precision > -1)
	{
		buffer_add_char(buffer, '.', 1);
		buffer_add_nbr(buffer, (unsigned long long)spec->precision);
	}
	return (1);
}
