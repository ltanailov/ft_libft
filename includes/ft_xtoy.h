/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoy.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:51:36 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/17 17:33:57 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_XTOY_H
# define FT_XTOY_H

/*
**	------------------------------------------------------------------------  **
**		INCLUDES     -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# include "ft_string.h"

/*
**	------------------------------------------------------------------------  **
**		DEFINES      -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# define UL_MAX 0xffffffffffffffff

/*
**	------------------------------------------------------------------------  **
**		FUNCTIONS    -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

/*
**	Converts the initial portion of the string pointed to by {str}
**	to int representation.
*/
int					ft_atoi(const char *str);

/*
**	Allocates and returns a “fresh” string ending with ’\0’
**	representing the integer {n} given as argument.
**	If the allocation fails, the function returns NULL.
*/
char				*ft_itoa(int n);

/*
**	Allocates and returns a “fresh” string ending with ’\0’
**	representing the long long integer {num} in {base} given as argument.
**	If the allocation fails, the function retuns NULL.
*/
char				*ft_lltoa_base(long long num, int base);

#endif
