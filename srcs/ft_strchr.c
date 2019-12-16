/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:29:37 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/08 21:08:56 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char				*ft_strchr(const char *src, int chr)
{
	size_t		pos;

	if (!src)
		return (NULL);
	pos = 0;
	if (*src == (char)chr)
		return ((char*)src);
	while (*src++)
		if (*src == (char)chr)
			return ((char*)(src - 1));
	return (NULL);
}
