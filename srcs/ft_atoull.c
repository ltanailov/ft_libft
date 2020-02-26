/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoull.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:39:56 by sselusa           #+#    #+#             */
/*   Updated: 2020/02/26 16:39:59 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t			pass_spaces(const char *str)
{
	size_t	pos;

	if (!str)
		return (0);
	pos = 0;
	while ((str[pos] > 8 && str[pos] < 14) || str[pos] == 32)
		pos++;
	return (pos);
}

unsigned long long		ft_atoull(const char *str)
{
	unsigned long long	num;
	size_t				pos;

	if (!str)
		return (0);
	num = 0;
	pos = pass_spaces(str);
	while (ft_isdigit(str[pos]))
	{
		num = num * 10 + str[pos] - '0';
		pos++;
	}
	return ((num));
}
