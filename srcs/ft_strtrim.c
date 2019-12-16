/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:20:03 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/08 20:58:05 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static int			ft_is_space(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char				*ft_strtrim(char const *s)
{
	size_t		start;
	size_t		end;
	char		*res;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && ft_is_space(s[start]))
		start++;
	while (s[end] && ft_is_space(s[end]))
		end--;
	end++;
	if (start >= end)
		return (ft_strnew(0));
	if (!(res = ft_strsub(s, start, end - start)))
		return (NULL);
	return (res);
}
