/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:34:23 by sselusa           #+#    #+#             */
/*   Updated: 2020/02/26 16:34:45 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_ultoa(unsigned long n)
{
	int						qt;
	unsigned long			num;
	char					*res;

	num = n;
	qt = 1;
	while (n / 10)
	{
		n = n / 10;
		qt++;
	}
	if (!(res = ft_strnew(qt)))
		return (NULL);
	while (qt-- >= 1)
	{
		res[qt] = num % 10 + '0';
		num = num / 10;
	}
	return (res);
}
