/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:23:22 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:49:09 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	src_len;

	if (!dst || !src)
		return (NULL);
	if (len == 0)
		return (dst);
	if (!(dst = ft_memcpy(dst, src, len)))
		return (NULL);
	src_len = ft_strlen(src);
	if (src_len < len)
		ft_bzero((void*)(dst + src_len), len - src_len);
	return (dst);
}
