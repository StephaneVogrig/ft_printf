/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ull_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:19:33 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 08:16:33 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ull_to_str_dec(char *str, unsigned long long n)
{
	int		i;

	i = LEN_MAXLONGLONG - 1;
	while (n > 9)
	{
		str[i--] = '0' + n % 10;
		n = n / 10;
	}
	str[i] = n + '0';

	return (LEN_MAXLONGLONG - i);
}

int ull_to_str_hexaupper(char *str, unsigned long long n)
{
	int		i;

	i = LEN_MAXLONGLONG - 1;
	while (n > 15)
	{
		str[i--] = "0123456789ABCDEF"[n & 0xfULL];
		n >>= 4;
	}
	str[i] = "0123456789ABCDEF"[n];

	return (LEN_MAXLONGLONG - i);
}

int	ull_to_str_hexalower(char *str, unsigned long long n)
{
	int		i;

	i = LEN_MAXLONGLONG - 1;
	while (n > 15)
	{
		str[i--] = "0123456789abcdef"[n & 0xfULL];
		n >>= 4;
	}
	str[i] = "0123456789abcdef"[n];

	return (LEN_MAXLONGLONG - i);
}
