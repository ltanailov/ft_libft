/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:48:07 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 20:00:50 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMORY_H
# define FT_MEMORY_H

/*
**	------------------------------------------------------------------------  **
**		INCLUDES     -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# include <stdlib.h>

/*
**	------------------------------------------------------------------------  **
**		FUNCTIONS    -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

/*
**	Writes {len} bytes of value {chr} (converted to an unsigned char)
**	to the memory area {src}.
*/
void				*ft_memset(void *src, int chr, size_t len);

/*
**	Writes {len} zeroed bytes to the memory area {src}.
**	if {len} is zero, bzero() does nothing.
*/
void				ft_bzero(void *src, size_t len);

/*
**	Copies {len} bytes from memory area {src} to memory area {dst}.
**	If {dst} and {src} overlap, behavior is undefined.
*/
void				*ft_memcpy(void *dst, const void *src, size_t len);

/*
**	Copies bytes from memory area {src} to memory area {dst}.
**	If the character {chr} (as converted to an unsigned char)
**	occurs in the memory area {src}, the copy stops and a pointer
**	to the byte after the copy of {chr} in the
**	memory area {dst} is returned.
**	Otherwise, {len} bytes are copied, and a NULL pointer is returned.
*/
void				*ft_memccpy(void *dst, const void *src,
						int chr, size_t len);

/*
**	Copies {len} bytes from memory area {src} to memory area {dst}.
**	The two memory areas may overlap; the copy is always done in a
**	non-destructive manner.
*/
void				*ft_memmove(void *dst, const void *src, size_t len);

/*
**	Locates the first occurrence of {chr} (converted to an unsigned char)
**	in memory area {src}.
*/
void				*ft_memchr(const void *src, int chr, size_t len);

/*
**	Compares memory area {mem1} against memory area {mem2}.
**	Both memory areas are assumed to be {len} bytes long.
*/
int					ft_memcmp(const void *mem1, const void *mem2, size_t len);

/*
**	Allocates and returns a “fresh” memory area of {size} bytes.
**	The memory allocated is initialized to 0.
**	If the allocation fails, the function returns NULL.
*/
void				*ft_memalloc(size_t size);

/*
**	Takes as a parameter the address of a memory area {ap} that needs
**	to be freed with free, then puts the pointer to NULL.
*/
void				ft_memdel(void **ap);

#endif
