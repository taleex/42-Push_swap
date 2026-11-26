# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/25 11:27:34 by jorgferr          #+#    #+#              #
#    Updated: 2026/11/26 14:45:56 by jorgferr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I. -I$(LIBFT_PRINTF_DIR) -I$(LIBFT_PRINTF_DIR)/libft
RM = rm -f

LIBFT_PRINTF_DIR = ./ft_printf
LIBFTPRINTF = $(LIBFT_PRINTF_DIR)/libftprintf.a

SRCS = ft_disorder.c ft_parse_args.c ft_error.c ft_strategy.c push_swap.c
SRC_OPERATIONS = ft_push.c  ft_reverse_rotate.c  ft_rotate.c  ft_swap.c
SRC_STRATEGY = ft_sort_medium.c  ft_sort_simple.c
SRC_STACK = ft_stack_build.c  ft_stack_helpers.c

SRC = $(addprefix src/, $(SRCS)) $(addprefix src/strategy/, $(SRC_STRATEGY))\
$(addprefix src/operations/, $(SRC_OPERATIONS)) $(addprefix src/stack_utils/, $(SRC_STACK))

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ) $(LIBFTPRINTF) -o $(NAME)

$(LIBFTPRINTF):
	$(MAKE) -C $(LIBFT_PRINTF_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFT_PRINTF_DIR)
	$(RM) $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_PRINTF_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
