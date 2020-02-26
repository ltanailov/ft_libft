/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:41:45 by sselusa           #+#    #+#             */
/*   Updated: 2020/02/26 16:45:39 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		skip_obs(char *str, int *is_neg)
{
	int		i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		*is_neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] == '0' && str[i + 1] == 'x')
		i += 2;
	return (i);
}

long long		ft_atoll_base(char *str, int base)
{
	int			i;
	int			is_neg;
	long long	res;
	int			digits;

	res = 0;
	is_neg = 1;
	i = skip_obs(str, &is_neg);
	if (base > 16 || base < 2)
		return (0);
	digits = ft_count_digits_base(&str[i], base) - 1;
	while (ft_isdigit(str[i]) || (str[i] >= 'A' && str[i] <= 'A' + base - 11)
								|| (str[i] >= 'a' && str[i] <= 'a' + base - 11))
	{
		if (ft_isdigit(str[i]) && str[i] > '0' + base)
			return (res * is_neg);
		if (ft_isdigit(str[i]))
			res += (str[i] - '0') * ft_pow(base, digits);
		else
			res += (str[i] - 55) * ft_pow(base, digits);
		i++;
		digits--;
	}
	return (res * is_neg);
}
