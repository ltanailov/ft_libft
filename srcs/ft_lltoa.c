/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:38:24 by sselusa           #+#    #+#             */
/*   Updated: 2020/02/26 16:38:26 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_lltoa(long long n)
{
	unsigned long long	num;
	int					qt;
	char				*res;
	int					sign;

	sign = n < 0 ? 1 : 0;
	num = n;
	num = num * (sign ? -1 : 1);
	qt = 1 + sign;
	while (n / 10)
	{
		n = n / 10;
		qt++;
	}
	if (!(res = ft_strnew(qt)))
		return (NULL);
	if (sign)
		res[0] = '-';
	while (qt-- >= 1 + sign)
	{
		res[qt] = num % 10 + '0';
		num = num / 10;
	}
	return (res);
}
