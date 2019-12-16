/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:05:38 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:47:13 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				*ft_memset(void *src, int chr, size_t len)
{
	unsigned char	*dst;
	unsigned char	symb;

	if (!src)
		return (NULL);
	symb = (unsigned char)chr;
	dst = (unsigned char*)src;
	while (len--)
		*dst++ = symb;
	return (src);
}
