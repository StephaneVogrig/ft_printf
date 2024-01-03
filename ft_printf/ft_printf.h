/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stephane <stephane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:05:06 by svogrig           #+#    #+#             */
/*   Updated: 2024/01/03 14:09:37 by stephane         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

# define BUFFER_SIZE 1024
# define LEN_MAXLONGLONG 20
# define MAX_DIGIT_HEXA 16
# define FALSE 0

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

typedef struct s_nbrstr {
	char	*str;
	int		len_nbr;
	char	prefixe;
	char	is_zero;
}	t_nbrstr;

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
					
/* buffer --------------------------------------------------------------------*/
void		buffer_add_char(t_buffer *buffer, char c, int n);
void		buffer_add_str(t_buffer *buffer, char *str, size_t len);
ssize_t		buffer_print(t_buffer buffer);
int			buffer_add_spec(t_buffer *buffer, t_spec *spec);

/* format --------------------------------------------------------------------*/
int			format_c(char c, t_spec *spec, t_buffer *buffer);
int			format_pc(t_buffer	*buffer);
int			format_i(long long nbr, t_spec *spec, t_buffer *buffer);
int			format_p(void *p, t_spec *spec, t_buffer *buffer);
int			format_s(char *str, t_spec *spec, t_buffer *buffer);
int			format_u(unsigned long long nbr, t_spec *spec, t_buffer *buffer);
int			format_x(unsigned long long nbr, t_spec *spec, t_buffer *buffer);
int			format_X(unsigned long long nbr, t_spec *spec, t_buffer *buffer);
					
/* ull to str ----------------------------------------------------------------*/
char		*ull_to_str_dec(char *str, unsigned long long n);
char		*ull_to_str_hexalower(char *str, unsigned long long n);
char		*ull_to_str_hexaupper(char *str, unsigned long long n);

/* ft utils ------------------------------------------------------------------*/
int			ft_isdigit(int c);
char		*ft_strchr(const char *s, int c);
size_t		ft_strlen(const char *s);

#endif
