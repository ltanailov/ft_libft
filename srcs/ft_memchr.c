/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:26:53 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:47:08 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				*ft_memchr(const void *src, int chr, size_t len)
{
	unsigned char	*src_ptr;
	unsigned char	symb;

	if (!src)
		return (NULL);
	src_ptr = (unsigned char*)src;
	symb = (unsigned char)chr;
	while (len--)
		if (*src_ptr++ == symb)
			return ((void*)--src_ptr);
	return (NULL);
}
