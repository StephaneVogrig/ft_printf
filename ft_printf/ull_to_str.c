/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ull_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:32:12 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/03 04:19:56 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "ft_printf.h"

char	*ull_to_str_dec(char *str, unsigned long long n)
{
	int		i;

	i = LEN_MAXLONGLONG - 1;
	while (n > 9)
	{
		str[i--] = '0' + n % 10;
		n = n / 10;
	}
	str[i] = n + '0';
	return (&str[i]);
}

char	*ull_to_str_hexaupper(char *str, unsigned long long n)
{
	int		i;

	i = MAX_DIGIT_HEXA - 1;
	while (n > 15)
	{
		str[i--] = "0123456789ABCDEF"[n & 0xfULL];
		n >>= 4;
	}
	str[i] = "0123456789ABCDEF"[n];
	return (&str[i]);
}

char	*ull_to_str_hexalower(char *str, unsigned long long n)
{
	int		i;

	i = MAX_DIGIT_HEXA - 1;
	while (n > 15)
	{
		str[i--] = "0123456789abcdef"[n & 0xfULL];
		n >>= 4;
	}
	str[i] = "0123456789abcdef"[n];
	return (&str[i]);
}
