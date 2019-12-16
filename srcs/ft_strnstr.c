/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:42:10 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/08 20:58:05 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (!haystack || !needle)
		return (NULL);
	if (!(*needle))
		return ((char*)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (!needle[j + 1] && (i + j) < len)
				return ((char*)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
