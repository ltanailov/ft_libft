/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:54:56 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:35:53 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

/*
**	------------------------------------------------------------------------  **
**		INCLUDES     -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# include <stdlib.h>

# include "ft_memory.h"

/*
**	------------------------------------------------------------------------  **
**		TYPES        -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
**	------------------------------------------------------------------------  **
**		FUNCTIONS    -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

/*
**	Allocates and returns a “fresh” link.
**	The variables {content} and {content_size} of the new link
**	are initialized by copy of the parameters of the function.
**	If the parameter content is nul, the variable content is initialized to
**	NULL and the variable {content_size} is initialized to 0 even
**	if the parameter {content_size} isn’t.
**	The variable next is initialized to NULL.
**	If the allocation fails, the function returns NULL.
*/
t_list				*ft_lstnew(void const *content, size_t content_size);

/*
**	Takes as a parameter a link’s pointer address {alst} and frees the
**	memory of the link’s content using the function {del} given as
**	a parameter, then frees the link’s memory using free.
**	The memory of next must not be freed under any circumstance.
**	Finally, the pointer to the link that was just freed must be set to NULL.
*/
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

/*
**	Takes as a parameter the adress of a pointer to a link {alst} and
**	frees the memory of this link and every successors of that link
**	using the functions {del} and free.
**	Finally, the pointer to the link that was just freed must be set to NULL.
*/
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));

/*
**	Adds the element {new_elem} at the beginnning of the {alst}.
*/
void				ft_lstadd(t_list **alst, t_list *new_elem);

/*
**	Iterates the list {alst} and applies the function {f} to each link {elem}.
*/
void				ft_lstiter(t_list *alst, void (*f)(t_list *elem));

/*
**	Iterates a list {alst} and applies the function {f} to each link to
**	create a “fresh” list resulting from the successive applications of {f}.
**	If the allocation fails, the function returns NULL.
*/
t_list				*ft_lstmap(t_list *alst, t_list *(*f)(t_list *elem));

#endif
