/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:26:07 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/19 01:52:52 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	print_ull_base(unsigned long long n, unsigned int base, char *base_char)
{
	char	str[20];
	int		i;

	i = 19;
	while (n > base - 1)
	{
		str[i--] = base_char[n % base];
		n = n / base;
	}
	str[i] = base_char[n % base];


	return (write(1, &str[i], 20 - i));
}

ssize_t print_ull(long long n)
{
	return (print_ull_base(n, 10, "0123456789"));
}

ssize_t	print_ullx(unsigned long long n)
{
	return (print_ull_base(n, 16, "0123456789abcdef"));
}

ssize_t	print_ullX(unsigned long long n)
{
	return (print_ull_base(n, 16, "0123456789ABCDEF"));
}
