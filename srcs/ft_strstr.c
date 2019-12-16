/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:38:29 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/08 20:58:05 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char				*ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;

	if (!haystack || !needle)
		return (NULL);
	if (!(*needle))
		return ((char*)haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (!(needle[j + 1]))
				return ((char*)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
