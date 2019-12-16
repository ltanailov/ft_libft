/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:31:42 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:47:05 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				*ft_memalloc(size_t size)
{
	void		*area;

	area = NULL;
	if ((area = malloc(size)))
		ft_bzero(area, size);
	return (area);
}
