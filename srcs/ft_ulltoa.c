/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:36:17 by sselusa           #+#    #+#             */
/*   Updated: 2020/02/26 16:36:19 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_ulltoa(unsigned long long int n)
{
	return (ft_ulltoa_base(n, 10, 0, 0));
}
