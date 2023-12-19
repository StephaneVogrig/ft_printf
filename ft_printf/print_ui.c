/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ui.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:41:01 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/18 20:04:26 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	print_ui(unsigned int n)
{
	return (print_ull((unsigned long long)n));
}

ssize_t	print_uix(unsigned int n)
{
	return (print_ullx((unsigned long long)n));
}

ssize_t	print_uiX(unsigned int n)
{
	return (print_ullX((unsigned long long)n));
}
