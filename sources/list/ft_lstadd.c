/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:34:10 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/07 21:51:28 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				ft_lstadd(t_list **alst, t_list *new_elem)
{
	if (!alst || !new_elem)
		return ;
	if (*alst)
		new_elem->next = *alst;
	*alst = new_elem;
}
