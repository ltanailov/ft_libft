/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:43:35 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/07 20:44:58 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int					ft_strcmp(const char *str1, const char *str2)
{
	size_t	pos;

	if (!str1 || !str2)
		return (0);
	pos = 0;
	while (str1[pos] || str2[pos])
	{
		if (str1[pos] != str2[pos])
			return ((int)(str1[pos] - str2[pos]));
		pos++;
	}
	return (0);
}
