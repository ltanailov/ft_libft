/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:02:14 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/08 20:58:05 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	size_t		len;
	char		*map;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(map = ft_strnew(len)))
		return (NULL);
	while (len--)
		map[len] = f(s[len]);
	return (map);
}
