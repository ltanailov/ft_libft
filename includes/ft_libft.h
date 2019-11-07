/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:34:26 by sselusa           #+#    #+#             */
/*   Updated: 2019/11/07 19:11:57 by sselusa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

/*
**	------------------------------------------------------------------------  **
**		INCLUDES     -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

/*
**	------------------------------------------------------------------------  **
**		DEFINES      -------------------------------------------------------  **
**	------------------------------------------------------------------------  **
*/

# define OVERFLOW 922337203685477580L

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
**	----------------------------------------------------  **
**		MEMORY       -----------------------------------  **
**	----------------------------------------------------  **
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

/*
**	----------------------------------------------------  **
**		CHAR         -----------------------------------  **
**	----------------------------------------------------  **
*/

/*
**	Tests for any character for whis isupper or islower is true.
*/
int					ft_isalpha(int chr);

/*
**	Tests for a decimal digit character.
*/
int					ft_isdigit(int chr);

/*
**	Tests for which isalpha or isdigit is true.
*/
int					ft_isalnum(int chr);

/*
**	Tests for an ASCII character,
**	which is any character between 0 and octal 0177 inclusive.
*/
int					ft_isascii(int chr);

/*
**	Tests for any printing character, including space (' ').
*/
int					ft_isprint(int chr);

/*
**	Converts an upper-case letter to the corresponding lower-case letter.
*/
int					ft_tolower(int chr);

/*
**	Converts an lower-case letter to the corresponding upper-case letter.
*/
int					ft_toupper(int chr);

/*
**	----------------------------------------------------  **
**		STRING       -----------------------------------  **
**	----------------------------------------------------  **
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

/*
**	----------------------------------------------------  **
**		XTOY         -----------------------------------  **
**	----------------------------------------------------  **
*/

/*
**	Converts the initial portion of the string pointed to by {str}
**	to int representation.
*/
int					ft_atoi(const char *str);

/*
**	Allocate and returns a “fresh” string ending with ’\0’
**	representing the integer {n} given as argument.
**	If the allocation fails, the function returns NULL.
*/
char				*ft_itoa(int n);

/*
**	----------------------------------------------------  **
**		OUTPUT       -----------------------------------  **
**	----------------------------------------------------  **
*/

/*
**	Outputs the character {c} to the standard output.
*/
void				ft_putchar(char c);

/*
**	Outputs the string {s} to the standard output
*/
void				ft_putstr(char const *s);

/*
**	Outputs the string {s} to the standard output
**	followed by a '\n'.
*/
void				ft_putendl(char const *s);

/*
**	Outputs the integer {n} to the standard output.
*/
void				ft_putnbr(int n);

/*
**	Outputs the char {c} to the file descriptor {fd}.
*/
void				ft_putchar_fd(char c, int fd);

/*
**	Outputs the string {s} to the file descriptor {fd}.
*/
void				ft_putstr_fd(const char *s, int fd);

/*
**	Outputs the string {s} to the file descriptor {fd}
**	followed by a '\n'.
*/
void				ft_putendl_fd(char const *s, int fd);

/*
**	Outputs the integer {n} to the file descriptor {fd}.
*/
void				ft_putnbr_fd(int n, int fd);

/*
**	----------------------------------------------------  **
**		LIST         -----------------------------------  **
**	----------------------------------------------------  **
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

/*
**	----------------------------------------------------  **
**		MATH         -----------------------------------  **
**	----------------------------------------------------  **
*/

#endif
