/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 04:17:07 by sleonard          #+#    #+#             */
/*   Updated: 2020/02/26 16:24:50 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
**	------------------------------------------------------------------------  **
**		INCLUDES     -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# include <stdarg.h>
# include <wchar.h>

# include "libft.h"

/*
**	------------------------------------------------------------------------  **
**		DEFINES      -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# define CHAR 10
# define UCHAR 11
# define SHORT 12
# define USHORT 13
# define INT 14
# define UNSIGNED 15
# define LONG 16
# define LONG_LONG 17
# define ULONG 18
# define ULONG_LONG 19
# define INT_MAX 20
# define DOUBLE 21
# define LDOUBLE 22
# define SIZE_T 23
# define STRING 24
# define PTR 25
# define OCTAL 26
# define S_HEX 27
# define B_HEX 28
# define BINARY 29
# define DATE 30
# define NON_PRINT 31
# define PERCENT 32
# define WCHAR 33
# define WSTRING 34

# define NO_FLAG -50
# define NO_VALUE -51
# define BREAK -3

# define ERR_MALLOC 100
# define ERR_NULL_STR 101
# define ERR_ARG 102
# define ERR_NULL_LIST 103

/*
**	------------------------------------------------------------------------  **
**		TYPES        -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

typedef struct			s_flags
{
	char				zero;
	char				space;
	char				grid;
	char				plus;
	char				minus;
}						t_flags;

typedef struct			s_format
{
	t_flags				flags;
	int					width;
	int					prec;
	int					type_flag;
	int					type;
	int					i;
}						t_format;

typedef struct			s_printf
{
	t_list				*buf;
	va_list				ap;
}						t_printf;

union					u_ld
{
	long double			ld_tmp;
	__int128_t			int_tmp;
};

typedef struct			s_ld
{
	union u_ld			ld;
	char				*str;
	int					exp;
	int					negative;
}						t_ld;

extern t_printf	g_pf;

/*
**	------------------------------------------------------------------------  **
**		FUNCTIONS    -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

int						ft_printf(const char *format, ...);
void					add_buf_node(char *part);
void					free_list(t_list **list);
char					*get_buffer(t_list **list, size_t total_len);
int						print_list(t_list **list, int fd);
t_flags					get_flags(char *part, int *i);
int						get_width(char *part, int *i);
int						get_precision(char *part, int *i);
int						get_type_flag(char *part, int *i);
int						get_type(char *part, int i);
t_format				get_format(char *part);
void					fill_int_format(t_format format, char *arg);
void					fill_format(t_format format, char *arg);
void					fill_float_format(t_format format, char *arg);
void					fill_text_format(t_format format, char *arg);
void					shift_arg(char **arg);
void					fill_differ(int differ, t_format format);
char					*get_prefix(char *arg, t_format *format);
char					*get_base_prefix(char *arg, t_format *format);
void					add_prefix(t_format format,
							int differ, char *prefix, int len);
char					*add_precision_zeros(t_format format,
							int *len, char *arg);
void					add_text(char *part, t_format format);
void					add_string(char *part, t_format format);
void					add_char(char *part, t_format format);
void					add_percent(char *part, t_format format);
char					*convert_signed_arg(t_format format);
void					add_signed(char *part, t_format format);
void					add_unsigned(char *part, t_format format);
void					add_base(char *part, t_format format);
void					print_format(t_format format);
char					*debug_type(int code);
void					my_tests(void);
void					basic_tests(void);
void					int_prec_tests(void);
void					moulitest(void);
void					leak_check(void);
void					min_leak_check(void);
void					raise_error(int err_code);
char					**split_flags(const char *str, char delim);
char					*check_fields(t_ld *ld);
void					add_double(char *part, t_format format);
char					*get_last_node(t_list *list);

#endif
