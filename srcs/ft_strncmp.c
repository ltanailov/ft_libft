/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:45:17 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 21:29:05 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int					ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t			pos;
	unsigned char	*s1;
	unsigned char	*s2;

	if (!str1 || !str2)
		return (0);
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	pos = 0;
	while ((s1[pos] || s2[pos]) && (pos < len))
	{
		if (s1[pos] != s2[pos])
			return ((int)(s1[pos] - s2[pos]));
		pos++;
	}
	return (0);
}
