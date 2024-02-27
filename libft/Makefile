# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 17:07:18 by aatan             #+#    #+#              #
#    Updated: 2024/02/12 15:27:53 by aatan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Werror -Wextra -I$(INC)

NAME = libftprintf.a

# Directories
INC = incl
SRC_DIR = src
OBJ_DIR = obj

# sources files
SRC_FLS = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isprint.c ft_isascii.c ft_toupper.c \
	ft_tolower.c ft_atoi.c ft_strlen.c \
	ft_putstr_fd.c ft_bzero.c ft_memset.c \
	ft_putchar_fd.c ft_striteri.c ft_putendl_fd.c \
	ft_memchr.c ft_memcpy.c ft_substr.c \
	ft_memcmp.c ft_memmove.c ft_strncmp.c \
	ft_strtrim.c ft_strdup.c \
	ft_strrchr.c ft_strchr.c ft_strmapi.c \
	ft_strnstr.c ft_strjoin.c ft_calloc.c \
	ft_itoa.c ft_split.c ft_strlcat.c ft_strlcpy.c \
	ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	ft_lstclear.c ft_lstiter.c ft_lstmap.c \
	ft_printf.c ft_write_args.c ft_write_argsnum.c \
	ft_libft.c \
	get_next_line.c

# Filepaths
SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FLS))
OBJ = $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o, $(SRCS))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -rf $(OBJ_DIR)
	@echo " >> clean"

fclean: clean
	rm -f $(NAME)
	@echo " >> Full Clean"

re: fclean all

.PHONY: all clean fclean re

