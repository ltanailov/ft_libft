/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:35:54 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:49:27 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_strrchr(const char *src, int chr)
{
	size_t		pos;

	if (!src)
		return (NULL);
	pos = ft_strlen(src);
	if (src[pos] == (char)chr)
		return ((char*)&(src[pos]));
	while (pos > 0)
	{
		if ((src[pos]) == (char)chr)
			return ((char*)&(src[pos]));
		pos--;
	}
	return (NULL);
}
