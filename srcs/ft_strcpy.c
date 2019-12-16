/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:22:35 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:48:08 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_strcpy(char *dst, const char *src)
{
	size_t		len;

	if (!dst)
		return (NULL);
	if (!src)
		return (dst);
	len = ft_strlen(src) + 1;
	if (!(dst = (char*)ft_memcpy(dst, src, len)))
		return (NULL);
	return (dst);
}
