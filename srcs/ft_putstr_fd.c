/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:44:40 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/17 16:27:57 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				ft_putstr_fd(const char *s, int fd)
{
	size_t			len;
	size_t			symbols;

	if (!s)
		return ;
	len = ft_strlen(s);
	symbols = 0;
	while (symbols < len)
		ft_putchar_fd(s[symbols++], fd);
}
