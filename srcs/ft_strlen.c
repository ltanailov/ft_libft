/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:16:34 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/17 16:28:31 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

size_t				ft_strlen(const char *src)
{
	size_t			len;

	if (!src)
		return (0);
	len = 0;
	while (*src++)
		len++;
	return (len);
}
