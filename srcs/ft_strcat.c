/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:24:25 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:47:19 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_strcat(char *str1, const char *str2)
{
	size_t		len;
	char		*dst;

	if (!str1 || !str2)
		return (NULL);
	len = ft_strlen(str2);
	dst = str1 + ft_strlen(str1);
	dst = (char*)ft_memcpy(dst, str2, len);
	dst[len] = '\0';
	return (str1);
}
