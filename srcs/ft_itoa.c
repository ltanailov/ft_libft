/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:33:18 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:46:36 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char				*ft_itoa(int n)
{
	unsigned int		num;
	int					symbols;
	char				*str;
	int					is_negative;

	is_negative = n < 0 ? 1 : 0;
	num = n * (is_negative ? -1 : 1);
	symbols = 1 + is_negative;
	while (n / 10)
	{
		n = n / 10;
		symbols++;
	}
	if (!(str = ft_strnew(symbols)))
		return (NULL);
	if (is_negative)
		str[0] = '-';
	while (symbols-- >= 1 + is_negative)
	{
		str[symbols] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}
