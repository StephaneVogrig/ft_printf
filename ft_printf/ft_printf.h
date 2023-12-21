/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:05:06 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 08:34:17 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

# define BUFFER_SIZE 256
# define LEN_MAXLONGLONG 20

typedef struct	buffer{
	char	data[BUFFER_SIZE];
	int		offset;
	ssize_t writed;
}	t_buffer;

typedef struct	s_spec {
	char	flag_hash;
	char	flag_zero;
	char	flag_minus;
	char	flag_space;
	char	flag_plus;
	int		width;
	int		precision;
	char	length[2];
	char	conversion;
}	t_spec;

int					ft_printf(const char *format, ...);

/* process -------------------------------------------------------------------*/
const char			*process_before_arg(const char *format, t_buffer *buffer);
const char			*process_arg(const char *format, t_buffer *buffer, va_list args);

/* specifications ------------------------------------------------------------*/
void				specification_init(t_spec *specification);

/* specifications set --------------------------------------------------------*/
const char			*set_flags(const char *format, t_spec *spec);
const char			*set_widthfield(const char *format, t_spec *spec);
const char			*set_precision(const char *format, t_spec *spec);
const char			*set_length(const char *format, t_spec *spec);
const char			*set_conversion(const char *format, t_spec *spec);

/* buffer -----------------------------------------------------------------*/
void				buffer_add_char(t_buffer *buffer, char c, int n);
void				buffer_add_str(t_buffer *buffer, char *str, size_t len);

/* character -----------------------------------------------------------------*/
void				convert_c(char c, t_spec *spec, t_buffer *buffer);
void				convert_s(char *str, t_spec *spec, t_buffer *buffer);
void				convert_p(void *p, t_spec *spec, t_buffer *buffer);
void				convert_i(va_list args, t_spec *spec, t_buffer *buffer);
void				convert_u(va_list args, t_spec *spec, t_buffer *buffer);
void				convert_x(va_list args, t_spec *spec, t_buffer *buffer);

/* buffer --------------------------------------------------------------------*/
ssize_t		buffer_print(t_buffer buffer);

/* utils ---------------------------------------------------------------------*/
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
char				*ft_strchr(const char *s, int c);
int					ft_isdigit(int c);
size_t				ft_strlen(const char *s);

unsigned long long	ull_from_arg(va_list args, t_spec *spec);
long long			ll_from_arg(va_list args, t_spec *spec);

int					ull_to_str_dec(char *str, unsigned long long n);
int 				ull_to_str_hexalower(char *str, unsigned long long n);
int 				ull_to_str_hexaupper(char *str, unsigned long long n);

void				format_ull(t_spec *spec, t_buffer *buffer, char *str, int len_str);
void				format_ll(t_spec *spec, t_buffer *buffer, char *str, int len_nbr);

#endif