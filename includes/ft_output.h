/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:53:31 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/07 22:54:31 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OUTPUT_H
# define FT_OUTPUT_H

/*
**	------------------------------------------------------------------------  **
**		INCLUDES     -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# include <unistd.h>

/*
**	------------------------------------------------------------------------  **
**		FUNCTIONS    -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

/*
**	Outputs the character {c} to the standard output.
*/
void				ft_putchar(char c);

/*
**	Outputs the string {s} to the standard output
*/
void				ft_putstr(char const *s);

/*
**	Outputs the string {s} to the standard output
**	followed by a '\n'.
*/
void				ft_putendl(char const *s);

/*
**	Outputs the integer {n} to the standard output.
*/
void				ft_putnbr(int n);

/*
**	Outputs the char {c} to the file descriptor {fd}.
*/
void				ft_putchar_fd(char c, int fd);

/*
**	Outputs the string {s} to the file descriptor {fd}.
*/
void				ft_putstr_fd(const char *s, int fd);

/*
**	Outputs the string {s} to the file descriptor {fd}
**	followed by a '\n'.
*/
void				ft_putendl_fd(char const *s, int fd);

/*
**	Outputs the integer {n} to the file descriptor {fd}.
*/
void				ft_putnbr_fd(int n, int fd);

#endif
