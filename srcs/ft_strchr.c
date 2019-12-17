/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:29:37 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/17 16:28:04 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_strchr(const char *src, int chr)
{
	if (!src)
		return (NULL);
	while (*src)
	{
		if (*src == (char)chr)
			return ((char*)(src));
		src++;
	}
	if (chr == '\0')
		return ((char*)src);
	return (NULL);
}
