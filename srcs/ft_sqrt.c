/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:38:17 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/17 16:59:22 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

unsigned long long	ft_sqrt(unsigned long long num)
{
	unsigned int	root;
	unsigned int	i;

	i = 1;
	root = num;
	while (i < root)
	{
		root = (root + i) >> 1;
		i = num / root;
	}
	return (root);
}
