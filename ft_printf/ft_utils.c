/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:01:55 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/10 00:20:35 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

char	*str_to_int(char *format, int *nbr)
{
	t_int64	w;
	
	if (!ft_isdigit(*format))
		return (format);
	w = 0;
	while (ft_isdigit(*format))
	{
		w = w * 10 + *format - '0';
		if (w > INT_MAX)
			return (NULL);
		format++;
	}
	*nbr = (int)w;		
	return (format);
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (2048);
	return (0);
}

