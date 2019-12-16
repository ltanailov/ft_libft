/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 22:49:55 by sselusa           #+#    #+#             */
/*   Updated: 2019/12/16 17:36:04 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

/*
**	------------------------------------------------------------------------  **
**		INCLUDES     -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# include "ft_memory.h"

/*
**	------------------------------------------------------------------------  **
**		FUNCTIONS    -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

/*
**	Computes the length of the string {src}.
*/
size_t				ft_strlen(const char *src);

/*
**	Allocates sufficient memory for a copy of the string {src},
**	does the copy, and returns a pointer to it.
**	If insufficient memory is available, NULL is returned and
**	errno is set to ENOMEM.
*/
char				*ft_strdup(const char *src);

/*
**	Copy the string {src} to {dst} (including the terminating '\0' character.)
*/
char				*ft_strcpy(char *dst, const char *src);

/*
**	Copy at most {len} caharacters from {src} into {dst}.
**	If {src} is less than {len} characters long,
**	the remainder of {dst} is filled with '\0' characters.
**	Otherwise, {dst} is not terminated.
*/
char				*ft_strncpy(char *dst, const char *src, size_t len);

/*
**	Append a copy of the null-terminated string {str2} to the end
**	of the null-terminated dstring {str1}, then add a terminating '\0'.
**	The string {str1} must have sufficient space to hold the result.
**	The source and destination strings should not overlap,
**	as the behavior is undefined.
*/
char				*ft_strcat(char *str1, const char *str2);

/*
**	Appends not more than {len} characters from {str2}, and then adds a
**	terminating '\0'.
**	The source and destination strings should not overlap,
**	as the behavior is undefined.
*/
char				*ft_strncat(char *str1, const char *str2, size_t len);

/*
**	Appends the NUL-terminated string {src} to the end of {dst}.
**	It will append at most {len}, NUL-terminating the result.
**	{src} and {dst} strings should not overlap,
**	as the behavior is undefined.
*/
size_t				ft_strlcat(char *dst, const char *src, size_t len);

/*
**	Locates the first occurrence of {chr} (converted to a char) in the
**	string pointed to by {src}. The terminating null character is
**	considered to be part of the string;
**	therefore if {chr} is '\0', the functions locate the
**	terminating '\0'.
*/
char				*ft_strchr(const char *src, int chr);

/*
**	Is identical to strchr(), except it locates the last occurrence of {chr}.
*/
char				*ft_strrchr(const char *src, int chr);

/*
**	Locates the first occurrence of the null-terminated string {needle}
**	in the null-terminated string {haystack}.
*/
char				*ft_strstr(const char *haystack, const char *needle);

/*
**	Locates the first occurrence of the null-terminated string {needle}
**	in the string {haystack}, where not more than {len} characters are
**	searched. Characters that appear after a '\0' are not searched.
*/
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);

/*
**	Lexicographically compare the null-terminated strings {str1} and {str2}.
*/
int					ft_strcmp(const char *str1, const char *str2);

/*
**	Lexicographically compare the null-terminated strings {str1} and {str2};
**	Compares not more than {len} characters.
*/
int					ft_strncmp(const char *str1, const char *str2, size_t len);

/*
**	Allocates and returns a “fresh” string of {size} bytes ending with ’\0’.
**	Each character of the string is initialized at ’\0’.
**	If the allocation fails the function returns NULL.
*/
char				*ft_strnew(size_t size);

/*
**	Takes as a parameter the address of a string {as} that need to be
**	freed with free, then sets its pointer to NULL.
*/
void				ft_strdel(char **as);

/*
**	Sets every character of the string {s} to the value ’\0’.
*/
void				ft_strclr(char *s);

/*
**	Applies the function {f} to each character
**	of the string {s} passed as argument.
**	Each character is passed by address to {f} to be modified if necessary.
*/
void				ft_striter(char *s, void (*f)(char *));

/*
**	Applies the function {f} to each character
**	of the string {s} passed as argument,
**	and passing its index as first argument.
**	Each character is passed by address to {f} to be modified if necessary.
*/
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
**	Applies the function {f} to each character
**	of the string {s} given as argument to create
**	a “fresh” new string resulting from the successive applications of {f}.
*/
char				*ft_strmap(char const *s, char (*f)(char));

/*
**	Applies the function {f} to each character
**	of the string {s} passed as argument by giving
**	its index as first argument to create
**	a “fresh” new string resulting from the successive applications of {f}.
*/
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
**	Lexicographical comparison between {s1} and {s2}.
**	If the 2 strings are identical the function returns 1, or 0 otherwise.
*/
int					ft_strequ(char const *s1, char const *s2);

/*
**	Lexicographical comparison between {s1} and {s2}
**	up to {n} characters or until a ’\0’ is reached.
**	If the 2 strings are identical, the function returns 1, or 0 otherwise.
*/
int					ft_strnequ(char const *s1, char const *s2, size_t n);

/*
**	Allocates and returns a “fresh” substring
**	from the string {s} given as argument. The substring begins at
**	index {start} and is of size {len}.
**	If {start} and {len} aren’t refering to a valid substring,
**	the behavior is undefined.
**	If the allocation fails, the function returns NULL.
*/
char				*ft_strsub(char const *s, unsigned int start, size_t len);

/*
**	Allocates and returns a “fresh” string ending with ’\0’,
**	result of the concatenation of {s1} and {s2}.
**	If the allocation fails the function returns NULL.
*/
char				*ft_strjoin(char const *s1, char const *s2);

/*
**	Allocates and returns a copy of the string {s}
**	given as argument without whitespaces at the beginning or at
**	the end of the string. Will be considered as whitespaces the
**	following characters ’ ’, ’\n’ and ’\t’.
**	If s has no whitespaces at the beginning or at the end,
**	the function returns a copy of {s}.
**	If the allocation fails the function returns NULL.
*/
char				*ft_strtrim(char const *s);

/*
**	Allocates and returns an array of “fresh”
**	strings (all ending with ’\0’, including the array itself)
**	obtained by spliting {s} using the character {c} as a delimiter.
**	If the allocation fails the function returns NULL.
*/
char				**ft_strsplit(char const *s, char c);

#endif
