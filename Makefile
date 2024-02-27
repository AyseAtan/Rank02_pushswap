# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aatan <aatan@student.42berlin.de>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 16:19:24 by aatan             #+#    #+#              #
#    Updated: 2024/02/26 12:15:31 by aatan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags
CC = cc
CFLAGS = -g -Wall -Werror -Wextra

# Targets
NAME = push_swap

# Directories
SRC_DIR = src
OBJ_DIR = obj
LIBFT_DIR = libft
LIBFT = ./libft/libftprintf.a

# sources files
SRC_FLS = src/main.c \
		src/command/push.c \
		src/command/reverse_rotate.c \
		src/command/rotate.c \
		src/command/swap.c \
		src/push_swap/sort_stacks.c \
		src/push_swap/sort_three.c \
		src/push_swap/handle_errors.c \
		src/push_swap/init_atob.c \
		src/push_swap/init_btoa.c \
		src/push_swap/split.c \
		src/push_swap/stack_init.c \
		src/push_swap/stack_utils.c

# Filepaths
SRCS = $(SRC_FLS)
OBJS = $(SRCS:.c=.o)

# Build rules
all: $(NAME)

$(LIBFT):
	make -C ./libft

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<


$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $@

test:
	git clone git@github.com:AyseAtan/Rank02_pushswaptester.git test

clean:
	rm -rf $(OBJS)
	make -C ./libft clean
	@echo " >> clean"

fclean: clean
	rm -f $(NAME)
	rm -rf test
	make -C ./libft fclean
	@echo " >> Full Clean"

re: fclean all

.PHONY: all clean fclean re test

