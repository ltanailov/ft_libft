/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:37:10 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:46:58 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

t_list				*ft_lstmap(t_list *alst, t_list *(*f)(t_list *elem))
{
	t_list		*res;

	if (!alst || !f)
		return (NULL);
	if (!(res = f(alst)))
		return (ft_lstmap(alst->next, f));
	if (alst->next)
		res->next = ft_lstmap(alst->next, f);
	return (res);
}
