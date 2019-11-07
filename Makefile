# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sselusa <sselusa@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 22:34:04 by sselusa           #+#    #+#              #
#    Updated: 2019/11/07 23:11:27 by sselusa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	-------------------------------------------------------------------------  #
#		PROJECT      --------------------------------------------------------  #
#	-------------------------------------------------------------------------  #

NAME = libft.a

#	-----------------------------------------------------  #
#		SOURCES      ------------------------------------  #
#		HEADERS      ------------------------------------  #
#		OBJECTS      ------------------------------------  #
#	-----------------------------------------------------  #

SRC_DIR = ./sources/
INCL_DIR = ./includes/
OBJ_DIR = ./objects/

MEMORY_SRC_DIR = $(SRC_DIR)memory/
MEMORY_OBJ_DIR = $(OBJ_DIR)memory/
MEMORY_SRC_FILES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_memalloc.c ft_memdel.c
MEMORY_SRC_PATHS = $(addprefix $(MEMORY_SRC_DIR), $(MEMORY_SRC_FILES))
MEMORY_OBJ_PATHS = $(patsubst $(MEMORY_SRC_DIR)/%.c, $(MEMORY_OBJ_DIR)/%.o, \
	$(MEMORY_SRC_PATHS))
MEMORY_DEPS = $(MEMORY_OBJ_PATHS:.o=.d)

CHAR_SRC_DIR = $(SRC_DIR)/char
CHAR_OBJ_DIR = $(OBJ_DIR)char/
CHAR_SRC_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_isupper.c ft_islower.c ft_tolower.c ft_toupper.c
CHAR_SRC_PATHS = $(addprefix $(CHAR_SRC_DIR), $(CHAR_SRC_FILES))
CHAR_OBJ_PATHS = $(patsubst $(CHAR_SRC_DIR)/%.c, $(CHAR_OBJ_DIR)/%.o, \
	$(CHAR_SRC_PATHS))
CHAR_DEPS = $(CHAR_OBJ_PATHS:.o=.d)

STRING_SRC_DIR = $(SRC_DIR)string/
STRING_OBJ_DIR = $(OBJ_DIR)string/
STRING_SRC_FILES = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
	ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_strnew.c \
	ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c \
	ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c ft_strsplit.c
STRING_SRC_PATHS = $(addprefix $(STRING_SRC_DIR), $(STRING_SRC_FILES))
STRING_OBJ_PATHS = $(patsubst $(STRING_SRC_DIR)/%.c, $(STRING_OBJ_DIR)/%.o, \
	$(STRING_SRC_PATHS))
STRING_DEPS = $(STRING_OBJ_PATHS:.o=.d)

XTOY_SRC_DIR = $(SRC_DIR)xtoy/
XTOY_OBJ_DIR = $(OBJ_DIR)xtoy/
XTOY_SRC_FILES = ft_atoi.c ft_itoa.c
XTOY_SRC_PATHS = $(addprefix $(XTOY_SRC_DIR), $(XTOY_SRC_FILES))
XTOY_OBJ_PATHS = $(patsubst $(XTOY_SRC_DIR)/%.c, $(XTOY_OBJ_DIR)/%.o, \
	$(XTOY_SRC_PATHS))
XTOY_DEPS = $(XTOY_OBJ_PATHS:.o=.d)

OUTPUT_SRC_DIR = $(SRC_DIR)output/
OUTPUT_OBJ_DIR = $(OBJ_DIR)output/
OUTPUT_SRC_FILES = ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OUTPUT_SRC_PATHS = $(addprefix $(OUTPUT_SRC_DIR), $(OUTPUT_SRC_FILES))
OUTPUT_OBJ_PATHS = $(patsubst $(OUTPUT_SRC_DIR)/%.c, $(OUTPUT_OBJ_DIR)/%.o, \
	$(OUTPUT_SRC_PATHS))
OUTPUT_DEPS = $(OUTPUT_OBJ_PATHS:.o=.d)

LIST_SRC_DIR = $(SRC_DIR)list/
LIST_OBJ_DIR = $(OBJ_DIR)list/
LIST_SRC_FILES = ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
	ft_lstiter.c ft_lstmap.c
LIST_SRC_PATHS = $(addprefix $(LIST_SRC_DIR), $(LIST_SRC_FILES))
LIST_OBJ_PATHS = $(patsubst $(LIST_SRC_DIR)/%.c, $(LIST_OBJ_DIR)/%.o, \
	$(LIST_SRC_PATHS))
LIST_DEPS = $(LIST_OBJ_PATHS:.o=.d)

#	-------------------------------------------------------------------------  #
#		FLAGS        --------------------------------------------------------  #
#	-------------------------------------------------------------------------  #

CFLGS = -Wall -Werror -Wextra
CFLGS_DBG = -g -fsanitize=address
CC = gcc
INCLUDES = -I$(INCL_DIR)

#	-------------------------------------------------------------------------  #
#		RULES        --------------------------------------------------------  #
#	-------------------------------------------------------------------------  #

.PHONY: all clean fclean re

all: $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(MEMORY_OBJ_DIR) : $(OBJ_DIR)
	mkdir -p $(MEMORY_OBJ_DIR)

$(CHAR_OBJ_DIR) : $(OBJ_DIR)
	mkdir -p $(CHAR_OBJ_DIR)

$(STRING_OBJ_DIR) : $(OBJ_DIR)
	mkdir -p $(STRING_OBJ_DIR)

$(XTOY_OBJ_DIR) : $(OBJ_DIR)
	mkdir -p $(XTOY_OBJ_DIR)

$(OUTPUT_OBJ_DIR) : $(OBJ_DIR)
	mkdir -p $(OUTPUT_OBJ_DIR)

$(LIST_OBJ_DIR) : $(OBJ_DIR)
	mkdir -p $(LIST_OBJ_DIR)

-include $(MEMORY_DEPS)
$(MEMORY_OBJ_DIR)/%.o: $(MEMORY_SRC_DIR)/%.c | $(MEMORY_OBJ_DIR)
	$(CC) $(CFLGS) -c -o $@ $< $(INCLUDES)

-include $(CHAR_DEPS)
$(CHAR_OBJ_DIR)/%.o: $(CHAR_SRC_DIR)/%.c | $(CHAR_OBJ_DIR)
	$(CC) $(CFLGS) -c -o $@ $< $(INCLUDES)

-include $(STRING_DEPS)
$(STRING_OBJ_DIR)/%.o: $(STRING_SRC_DIR)/%.c | $(STRING_OBJ_DIR)
	$(CC) $(CFLGS) -c -o $@ $< $(INCLUDES)

-include $(XTOY_DEPS)
$(XTOY_OBJ_DIR)/%.o: $(XTOY_SRC_DIR)/%.c | $(XTOY_OBJ_DIR)
	$(CC) $(CFLGS) -c -o $@ $< $(INCLUDES)

-include $(OUTPUT_DEPS)
$(OUTPUT_OBJ_DIR)/%.o: $(OUTPUT_SRC_DIR)/%.c | $(OUTPUT_OBJ_DIR)
	$(CC) $(CFLGS) -c -o $@ $< $(INCLUDES)

-include $(LIST_DEPS)
$(LIST_OBJ_DIR)/%.o: $(LIST_SRC_DIR)/%.c | $(LIST_OBJ_DIR)
	$(CC) $(CFLGS) -c -o $@ $< $(INCLUDES)

$(NAME): $(MEMORY_OBJ_PATHS) $(CHAR_OBJ_PATHS) $(STRING_OBJ_PATHS) $(XTOY_OBJ_PATHS) $(OUTPUT_OBJ_PATHS) $(LIST_OBJ_PATHS)
	ar rc $(NAME) $(MEMORY_OBJ_PATHS) $(CHAR_OBJ_PATHS) $(STRING_OBJ_PATHS) $(XTOY_OBJ_PATHS) $(OUTPUT_OBJ_PATHS) $(LIST_OBJ_PATHS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
