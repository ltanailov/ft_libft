/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:11:33 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:47:06 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				*ft_memccpy(void *dst, const void *src,
						int chr, size_t len)
{
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;
	unsigned char	symb;

	if (!dst)
		return (NULL);
	if (!src)
		return (dst);
	src_ptr = (unsigned char*)src;
	dst_ptr = (unsigned char*)dst;
	symb = (unsigned char)chr;
	while (len--)
	{
		if (*src_ptr == symb && ((*dst_ptr = *src_ptr) || 1))
			return ((void*)(++dst_ptr));
		else
			*dst_ptr++ = *src_ptr++;
	}
	return (NULL);
}
