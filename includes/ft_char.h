/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:46:51 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/07 22:47:34 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHAR_H
# define FT_CHAR_H

/*
**	------------------------------------------------------------------------  **
**		FUNCTIONS    -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

/*
**	Tests for any character for whis isupper or islower is true.
*/
int					ft_isalpha(int chr);

/*
**	Tests for a decimal digit character.
*/
int					ft_isdigit(int chr);

/*
**	Tests for which isalpha or isdigit is true.
*/
int					ft_isalnum(int chr);

/*
**	Tests for an ASCII character,
**	which is any character between 0 and octal 0177 inclusive.
*/
int					ft_isascii(int chr);

/*
**	Tests for any printing character, including space (' ').
*/
int					ft_isprint(int chr);

/*
**	Tests for a upper-case letter.
*/
int					ft_isupper(int chr);

/*
**	Tests for a lower-case letter.
*/
int					ft_islower(int chr);

/*
**	Converts an upper-case letter to the corresponding lower-case letter.
*/
int					ft_tolower(int chr);

/*
**	Converts an lower-case letter to the corresponding upper-case letter.
*/
int					ft_toupper(int chr);

#endif