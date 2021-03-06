/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:35:11 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 21:37:38 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void				ft_lstiter(t_list *alst, void (*f)(t_list *elem))
{
	if (!alst || !f)
		return ;
	while (alst)
	{
		f(alst);
		alst = alst->next;
	}
}
