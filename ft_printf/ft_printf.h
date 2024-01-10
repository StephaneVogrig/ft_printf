/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:05:06 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/10 00:20:55 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include "vs_type.h"
# include "float.h"
# include "nbr_digit.h"

# define BUFFER_SIZE 1024
# define LEN_MAXLONGLONG 20
# define MAX_DIGIT_HEXA 16
# define FALSE 0
# define TRUE 1

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
	char	right_align;
	char	left_align;
	char	prefix;
	int		width;
	int		precision;
	char	length[2];
}	t_spec;

typedef struct s_nbrstr {
	char	*str;
	int		nbr_digit;
	char	is_zero;
}	t_nbrstr;

typedef struct s_round {
	t_ui32	nbr_digit : 16;
	t_ui32	intpart : 1;
	t_ui32	decpart : 1;
}	t_round;

int			ft_printf(const char *format, ...);

/* parsing -------------------------------------------------------------------*/
const char	*parse_arg(const char *format, t_buffer *buffer, va_list args, \
			int *errors);

/* set specifications --------------------------------------------------------*/
const char	*set_flags(const char *format, t_spec *spec);
const char	*set_widthfield(const char *format, t_spec *spec, va_list args);
const char	*set_precision(const char *format, t_spec *spec, va_list args);
const char	*set_length(const char *format, t_spec *spec);
const char	*set_conversion(const char *format, t_spec *spec);

/* nbrstr_to_buffer ----------------------------------------------------------*/
void		nbrstr_to_buffer(t_buffer *buffer, t_spec *spec, t_nbrstr *ns);
void		prefixe_to_buffer(t_buffer *buffer, char prefixe);
					
/* buffer --------------------------------------------------------------------*/
void		buffer_add_char(t_buffer *buffer, char c, int n);
void		buffer_add_str(t_buffer *buffer, char *str, size_t len);
ssize_t		buffer_print(t_buffer buffer);
int			buffer_add_spec(t_buffer *buffer, t_spec *spec);

/* format --------------------------------------------------------------------*/
int			format_c(char c, t_spec *spec, t_buffer *buffer);
int			format_pc(t_buffer	*buffer);
int			format_i(t_int64 nbr, t_spec *spec, t_buffer *buffer);
int			format_p(void *p, t_spec *spec, t_buffer *buffer);
int			format_s(char *str, t_spec *spec, t_buffer *buffer);
int			format_s_float(char *str, t_spec *spec, t_buffer *buffer);
int			format_s_only_width(char *str, t_spec *spec, t_buffer *buffer);
int			format_u(t_ui64 nbr, t_spec *spec, t_buffer *buffer);
int			format_x(t_ui64 nbr, t_spec *spec, t_buffer *buffer);
int			format_X(t_ui64 nbr, t_spec *spec, t_buffer *buffer);
int			format_f(double nbr, t_spec *spec, t_buffer *buffer);

/* field --------------------------------------------------------------------*/
void		field_compute_empty_float(t_spec *spec, int nbr_digit_int);
void		field_compute_empty_integer(t_spec *spec, int nbr_digit_int);
void		field_empty_before_to_buffer(t_spec *spec, t_buffer *buffer);
void		field_empty_after_to_buffer(t_spec *spec, t_buffer *buffer);

/* ui64 to str --------------------------------------------------------------*/
char		*ui64_to_str_dec(char *str, t_ui64 n);
char		*ui64_to_str_hexalower(char *str, t_ui64 n);
char		*ui64_to_str_hexaupper(char *str, t_ui64 n);

/* math ----------------------------------------------------------------------*/
t_float128	vs_10pow(int p);

/* ft utils ------------------------------------------------------------------*/
int			ft_isdigit(int c);
size_t		ft_strlen(const char *s);
char		*str_to_int(char *format, int *nbr);

#endif
