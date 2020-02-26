# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 22:34:04 by sselusa           #+#    #+#              #
#    Updated: 2020/02/26 16:47:59 by sselusa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	-------------------------------------------------------------------------  #
#		PROJECT      --------------------------------------------------------  #
#	-------------------------------------------------------------------------  #

NAME = libft.a
SHARED = libft.so

#	-----------------------------------------------------  #
#		SOURCES      ------------------------------------  #
#		HEADERS      ------------------------------------  #
#		OBJECTS      ------------------------------------  #
#	-----------------------------------------------------  #

SRCS_DIR = ./srcs
INCL_DIR = ./includes
OBJS_DIR = ./objects

FT_MEMORY_SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c

FT_CHAR_SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_isupper.c ft_islower.c ft_tolower.c ft_toupper.c

FT_STRING_SRCS = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c \
	ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c \
	ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_strnew.c ft_strdel.c ft_strclr.c \
	ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c
	
FT_XTOY_SRCS = ft_atoi.c ft_itoa.c ft_lltoa_base.c ft_ultoa.c ft_ulltoa.c \
	ft_ulltoa_base.c ft_lltoa.c ft_atoull.c ft_atoll_base.c

FT_OUTPUT_SRCS = ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

FT_LIST_SRCS = ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
	ft_lstiter.c ft_lstmap.c ft_lstaddback.c

FT_MATH_SRCS = ft_pow.c ft_sqrt.c ft_count_digits.c ft_count_digits_base.c \
	ft_is_even.c

FT_GNL_SRCS = ft_gnl.c

FT_PRINTF_SRCS = ft_printf.c pf_error.c pf_format_filler.c pf_format_parser.c \
	pf_int.c pf_split_flags.c pf_string.c pf_int.c pf_floats.c \
	pf_fields_check.c pf_format_filler_utils.c

ALL_SRCS = $(FT_MEMORY_SRCS) $(FT_CHAR_SRCS) $(FT_STRING_SRCS) \
	$(FT_XTOY_SRCS) $(FT_OUTPUT_SRCS) $(FT_LIST_SRCS) \
	$(FT_GNL_SRCS) $(FT_MATH_SRCS) $(FT_PRINTF_SRCS)

SRCS = $(addprefix $(SRCS_DIR)/, $(ALL_SRCS))
OBJS = $(patsubst $(SRCS_DIR)/%.c,$(OBJS_DIR)/%.o, $(SRCS))
DEPS = $(OBJS:.o=.d)
INCL = $(INCL_DIR)

#	-----------------------------------------------------  #
#		FLAGS        ------------------------------------  #
#	-----------------------------------------------------  #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
DFLAGS = -MMD -MP
IFLAGS = -I $(INCL_DIR)
SO_FLAGS = -shared -fPIC

#	-----------------------------------------------------  #
#		RULES        ------------------------------------  #
#	-----------------------------------------------------  #

.PHONY: all clean fclean re so

all: $(NAME)

-include $(DEPS)
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@/bin/echo -n "═"
	@$(CC) $(CFLAGS) $(DFLAGS) -c -o $@ $< $(IFLAGS)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@/bin/echo "╣ $(NAME)"

so: $(SHARED)

$(SHARED): $(OBJS)
	@$(CC) -o $(SHARED) $(SO_FLAGS) $(OBJS)
	@/bin/echo "╣ $(SHARED)"

clean:
	@if [ -d "$(OBJS_DIR)" ]; then \
		rm -rf $(OBJS_DIR); \
		/bin/echo "╣ rm ft_libft objects"; \
	fi

fclean: clean
	@if [ -f "$(NAME)" ]; then \
		rm -rf $(NAME); \
		/bin/echo "╣ rm $(NAME)"; \
	fi
	@if [ -f "$(SHARED)" ]; then \
		rm -rf $(SHARED); \
		/bin/echo "╣ rm $(SHARED)"; \
	fi

re: fclean all
