/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:36:29 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 18:15:32 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static size_t		ft_pass_spaces(const char *str)
{
	size_t			pos;

	pos = 0;
	if (!str)
		return (pos);
	while ((str[pos] > 8 && str[pos] < 14) || str[pos] == 32)
		pos++;
	return (pos);
}

static size_t		ft_get_sign(const char *str, size_t *pos)
{
	int				sign;

	sign = 1;
	if (str[*pos] == '-' || str[*pos] == '+')
	{
		if (str[*pos] == '-')
			sign = -1;
		(*pos)++;
	}
	return (sign);
}

int					ft_atoi(const char *str)
{
	unsigned long		num;
	int					sign;
	size_t				pos;

	num = 0;
	pos = ft_pass_spaces(str);
	sign = ft_get_sign(str, &pos);
	while (ft_isdigit(str[pos]))
	{
		if (sign == 1 && (num > (UL_MAX / 10) ||
			(num == (UL_MAX / 10) && str[pos] - '0' > 7)))
			return (-1);
		if (sign == -1 && (num > (UL_MAX / 10) ||
			(num == (UL_MAX / 10) && str[pos] - '0' > 8)))
			return (0);
		num = num * 10 + str[pos] - '0';
		pos++;
	}
	return ((int)(sign * num));
}
