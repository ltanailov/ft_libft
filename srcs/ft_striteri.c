/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:01:15 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:48:40 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	pos;

	if (!s || !f)
		return ;
	pos = 0;
	while (*s)
		f(pos++, s++);
}
