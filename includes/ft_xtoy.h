/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xtoy.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:51:36 by sselusa           #+#    #+#             */
/*   Updated: 2020/02/26 17:41:13 by sselusa          ###   ########.fr       */
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

/*
**	Allocates and returns a “fresh” string ending with ’\0’
**	representing the unsigned long integer {n} given as argument.
**	If the allocation fails, the function retuns NULL.
*/
char				*ft_ultoa(unsigned long n);

/*
**	Allocates and returns a “fresh” string ending with ’\0’
**	representing the unsigned long long integer {n} given as argument.
**	If the allocation fails, the function retuns NULL.
*/
char				*ft_ulltoa(unsigned long long int n);

/*
**	Allocates and returns a “fresh” string ending with ’\0’
**	representing the unsigned long long integer {nbr}
**	in {base} given as argument.
**	If the allocation fails, the function retuns NULL.
*/
char				*ft_ulltoa_base(unsigned long long nbr,
						int base, char capital, char format);

/*
**	Allocates and returns a “fresh” string ending with ’\0’
**	representing the long long integer {n} given as argument.
**	If the allocation fails, the function retuns NULL.
*/
char				*ft_lltoa(long long n);

/*
**	Returns a unsigned long long integer
**	representing the string {n} ending with '\0' given as argument.
*/
unsigned long long	ft_atoull(const char *str);

/*
**	Returns a long long integer in base of {base} given as argument.
**	representing the string {str} ending with '\0' given as argument.
*/
long long			ft_atoll_base(char *str, int base);

#endif
