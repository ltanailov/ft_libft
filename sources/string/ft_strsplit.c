/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:21:45 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/07 21:31:53 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static int			ft_wordcount(char *s, char c, size_t *start,
						int *current_wordcount)
{
	int				wordcount;

	*start = 0;
	wordcount = 0;
	if (*s != c)
		wordcount++;
	while (*++s)
		if (*s != c && *(s - 1) == c)
			wordcount++;
	*current_wordcount = wordcount;
	return (wordcount);
}

static int			ft_wordsdel(char **s, int num)
{
	while (num)
		ft_memdel(&s[num--]);
	ft_memdel(s);
	return (s);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**split;
	size_t		start;
	size_t		end;
	int			wordcount;
	int			current_wordcount;

	if (!s || !*s)
		return (ft_memalloc(0));
	wordcount = ft_wordcount((char*)s, c, &start, &current_wordcount);
	if (!(split = malloc(sizeof(char**) * (wordcount + 1))))
		return (NULL);
	split[wordcount] = 0;
	while (current_wordcount < wordcount)
	{
		end = 0;
		while (s[start] == c)
			start++;
		while (s[start + end] != c && s[start + end])
			end++;
		split[current_wordcount++] = ft_strsub(s, start, end);
		if (!split[current_wordcount - 1])
			return (ft_clear(split, current_wordcount - 1));
		start += end;
	}
	return (split);
}
