/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:29:37 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/07 20:32:58 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_strchr(const char *src, int chr)
{
	size_t		pos;

	if (!src)
		return (NULL);
	pos = 0;
	if (*src == (char)chr)
		return (src);
	while (*src++)
		if (*src == (char)chr)
			return (src - 1);
	return (NULL);
}
