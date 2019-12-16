/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:40:13 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:46:04 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int					ft_isalpha(int chr)
{
	return (ft_isupper(chr) || ft_islower(chr));
}
