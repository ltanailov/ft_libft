/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:43:00 by sselusa           #+#    #+#             */
/*   Updated: 2020/02/26 16:44:09 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_digits_base(char *str, int base)
{
	int		i;
	char	test;

	i = 0;
	while (str[i])
	{
		test = ft_toupper(str[i]);
		if ((ft_isdigit(test) && test <= '0' + base)
			|| (test >= 'A' && test <= 'A' + base - 11))
			i++;
		else
			break ;
	}
	return (i);
}
