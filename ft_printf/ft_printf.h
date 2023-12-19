/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:05:06 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/18 20:06:27 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int	ft_printf(const char *format, ...);

/* character -----------------------------------------------------------------*/
ssize_t	print_c(char c);

/* string --------------------------------------------------------------------*/
ssize_t	print_s(char *str);

/* pointer -------------------------------------------------------------------*/
ssize_t	print_p(void *p);

/* int -----------------------------------------------------------------------*/
ssize_t	print_i(int	n);

/* unsigned int --------------------------------------------------------------*/
ssize_t	print_ui(unsigned int n);
ssize_t	print_uix(unsigned int n);
ssize_t	print_uiX(unsigned int n);

/* long long -----------------------------------------------------------------*/
ssize_t print_ll(long long n);

/* unsigned long long --------------------------------------------------------*/
ssize_t print_ull(long long n);
ssize_t	print_ullx(unsigned long long n);
ssize_t	print_ullX(unsigned long long n);

#endif