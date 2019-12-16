/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 21:43:37 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:47:15 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				ft_putchar_fd(char c, int fd)
{
	unsigned char	ch[2];

	if (c >= 0)
		write(fd, &c, 1);
	else
	{
		ch[0] = (3 << 6) + ((unsigned char)c >> 6);
		ch[1] = (1 << 7) + ((unsigned char)c & 63);
		write(fd, ch, 2);
	}
}
