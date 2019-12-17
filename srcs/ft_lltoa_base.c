/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 17:24:46 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/17 17:31:33 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_lltoa_base(long long num, int base)
{
	long long		i;
	char			*str;
	int				neg;

	i = 1;
	neg = 0;
	if (num < 0)
	{
		if (base == 10)
			neg = 1;
		num *= -1;
	}
	while (ft_pow(base, i) - 1 < num)
		i++;
	if (!(str = ft_strnew((size_t)(i + neg))))
		return (NULL);
	while (i-- > 0)
	{
		str[i + neg] = (num % base) + (num % base > 9 ? 'A' - 10 : '0');
		num = num / base;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
