/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:21:45 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/17 16:28:57 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static int			ft_wordcount(char *s, char c)
{
	int				wordcount;

	wordcount = 0;
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			wordcount++;
		s++;
	}
	return (wordcount ? wordcount : 1);
}

static char			**ft_wordsdel(char **s, int num)
{
	while (num)
		ft_memdel((void**)&(s[num--]));
	ft_memdel((void**)s);
	return (s);
}

static char			*ft_getword(char **s, char c)
{
	size_t			start;
	size_t			end;
	char			*ret;

	start = 0;
	end = 0;
	while ((*s)[start] == c)
		start++;
	while ((*s)[start + end] != c && (*s)[start + end])
		end++;
	ret = ft_strsub(*s, start, end);
	*s = *s + start + end;
	return (ret);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**split;
	char			*word;
	int				wordcount;
	int				current_wordcount;

	if (!s)
		return (ft_memalloc(0));
	wordcount = ft_wordcount((char*)s, c);
	current_wordcount = 0;
	if (!(split = malloc(sizeof(char**) * (wordcount + 1))))
		return (NULL);
	split[wordcount] = 0;
	while (current_wordcount < wordcount)
	{
		word = ft_getword((char**)&s, c);
		split[current_wordcount] = word;
		if (!split[current_wordcount])
			return (ft_wordsdel(split, current_wordcount));
		current_wordcount++;
	}
	return (split);
}
