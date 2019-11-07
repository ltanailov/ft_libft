/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:27:41 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/07 19:29:31 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int					ft_memcmp(const void *mem1, const void *mem2, size_t len)
{
	unsigned char	*mem1_ptr;
	unsigned char	*mem2_ptr;

	if (!mem1 || !mem2)
		return (0);
	mem1_ptr = (unsigned char*)mem1;
	mem2_ptr = (unsigned char*)mem2;
	while (len--)
		if (*mem1_ptr++ != *mem2_ptr++)
			return (*(--mem1_ptr) - *(--mem2_ptr));
	return (0);
}
