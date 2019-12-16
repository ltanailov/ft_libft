/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:27:19 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:49:02 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_strncat(char *str1, const char *str2, size_t len)
{
	size_t		src_len;
	char		*dst;

	if (!str1 || !str2)
		return (NULL);
	src_len = ft_strlen(str2);
	if (src_len < len)
		len = src_len;
	dst = str1 + ft_strlen(str1);
	dst = (char*)ft_memcpy(dst, str2, len);
	dst[len] = '\0';
	return (str1);
}
