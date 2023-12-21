/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svogrig <svogrig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:05:06 by svogrig           #+#    #+#             */
/*   Updated: 2023/12/21 20:17:52 by svogrig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

# define BUFFER_SIZE 256
# define LEN_MAXLONGLONG 20

typedef struct buffer{
	char	data[BUFFER_SIZE];
	int		offset;
	ssize_t	writed;
}	t_buffer;

typedef struct s_spec {
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

/* parsing -------------------------------------------------------------------*/
const char			*parse_before_arg(const char *format, t_buffer *buffer);
const char			*parse_arg(const char *format, t_buffer *buffer, \
					va_list args, int *errors);
void				specification_init(t_spec *specification);

/* specifications set --------------------------------------------------------*/
const char			*set_flags(const char *format, t_spec *spec);
const char			*set_widthfield(const char *format, t_spec *spec);
const char			*set_precision(const char *format, t_spec *spec);
const char			*set_length(const char *format, t_spec *spec);
const char			*set_conversion(const char *format, t_spec *spec);

/* buffer --------------------------------------------------------------------*/
void				buffer_add_char(t_buffer *buffer, char c, int n);
void				buffer_add_str(t_buffer *buffer, char *str, size_t len);
ssize_t				buffer_print(t_buffer buffer);
int					buffer_add_spec(t_buffer *buffer, t_spec *spec);

/* format --------------------------------------------------------------------*/
int					format_c(char c, t_spec *spec, t_buffer *buffer);
int					format_pc(t_buffer	*buffer);
int					format_i(va_list args, t_spec *spec, t_buffer *buffer);
int					format_p(void *p, t_spec *spec, t_buffer *buffer);
int					format_s(char *str, t_spec *spec, t_buffer *buffer);
int					format_u(va_list args, t_spec *spec, t_buffer *buffer);
void				format_ull(t_spec *spec, t_buffer *buffer, char *str, \
					int len_str);
void				format_ll(t_spec *spec, t_buffer *buffer, char *str, \
					int len_nbr);

/* format is set -------------------------------------------------------------*/
int					is_set_field_right_zero(t_spec *spec, int len_occuped);
int					is_set_field_right_nonzero(t_spec *spec, int len_occuped);
int					is_set_hexa_hash(t_spec *spec);
/* ft utils ------------------------------------------------------------------*/
int					ft_isdigit(int c);
void				*ft_memchr(const void *s, int c, size_t n);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlen(const char *s);

/* arg to ll -----------------------------------------------------------------*/
unsigned long long	arg_to_ull(va_list args, t_spec *spec);
long long			arg_to_ll(va_list args, t_spec *spec);

/* ull to str ----------------------------------------------------------------*/
int					ull_to_str_dec(char *str, unsigned long long n);
int					ull_to_str_hexalower(char *str, unsigned long long n);
int					ull_to_str_hexaupper(char *str, unsigned long long n);

#endif
