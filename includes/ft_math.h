/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:34:13 by sselusa           #+#    #+#             */
/*   Updated: 2020/02/26 16:47:32 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

/*
**	------------------------------------------------------------------------  **
**		INCLUDES     -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# include "ft_libft.h"

/*
**	------------------------------------------------------------------------  **
**		FUNCTIONS    -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

/*
**	Raises the {num} to the power of {exp}.
*/
long long			ft_pow(long long num, unsigned int exp);

/*
**	Returns square root of {num}.
*/
unsigned long long	ft_sqrt(unsigned long long num);

/*
**	Returns count of digits in {nb}.
*/
int					ft_count_digits(int nb);

/*
**	Returns count of digits in {str} in base of {base}.
*/
int					ft_count_digits_base(char *str, int base);

/*
**	Returns 1 if {num} is even. Returns 0 otherwise.
*/
int					ft_is_even(int num);

#endif
