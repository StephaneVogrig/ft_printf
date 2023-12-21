/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ull_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 23:19:33 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 01:12:32 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ull_to_str(char *str, unsigned long long n, int base_n, char *base_str)
{
	int		i;

	i = LEN_MAXLONGLONG - 1;
	while (n > (unsigned long long)base_n - 1)
	{
		str[i--] = base_str[n % base_n];
		n = n / base_n;
	}
	str[i] = base_str[n];

	return (LEN_MAXLONGLONG - i);
}

int	ull_to_str_dec(char *str, unsigned long long n)
{
	return (ull_to_str(str, n, 10, "0123456789"));
}

int ull_to_str_hexalower(char *str, unsigned long long n)
{
	return (ull_to_str(str, n, 16, "0123456789abcdef"));
}

int ull_to_str_hexaupper(char *str, unsigned long long n)
{
	return (ull_to_str(str, n, 16, "0123456789ABCDEF"));
}