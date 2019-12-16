/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:45:17 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:49:05 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int					ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t		pos;

	if (!str1 || !str2)
		return (0);
	pos = 0;
	while ((str1[pos] || str2[pos]) && (pos < len))
	{
		if (str1[pos] != str2[pos])
			return ((int)(str1[pos] - str2[pos]));
		pos++;
	}
	return (0);
}
