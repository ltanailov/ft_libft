/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:20:26 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:48:26 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_strdup(const char *src)
{
	char		*dst;
	size_t		len;

	if (!src)
		return (NULL);
	len = ft_strlen(src) + 1;
	if (!(dst = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	dst = (char*)ft_memcpy(dst, src, len);
	return (dst);
}