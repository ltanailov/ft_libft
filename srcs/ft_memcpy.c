/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:09:03 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:47:10 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;

	if (!dst || !src)
		return (NULL);
	src_ptr = (unsigned char*)src;
	dst_ptr = (unsigned char*)dst;
	while (len--)
	{
		*dst_ptr++ = *src_ptr++;
	}
	return (dst);
}
