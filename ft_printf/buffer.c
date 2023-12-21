/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:33:14 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 12:11:56 by svogrig          ###   ########.fr       */
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
