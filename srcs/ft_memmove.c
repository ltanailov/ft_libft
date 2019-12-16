/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:21:42 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/08 20:01:09 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;

	if (!dst || !src)
		return (NULL);
	if (src == dst)
		return ((void*)src);
	dst_ptr = (unsigned char*)dst;
	src_ptr = (unsigned char*)src;
	if (dst_ptr < src_ptr)
		while (len--)
			*dst_ptr++ = *src_ptr++;
	else
	{
		src_ptr += (len - 1);
		dst_ptr += (len - 1);
		while (len--)
			*dst_ptr-- = *src_ptr--;
	}
	return (dst);
}
