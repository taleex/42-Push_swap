# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: username <username@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/21 12:04:01 by username          #+#    #+#              #
#    Updated: 2026/11/23 11:50:19 by username         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I. -I$(LIBFT_PRINTF_DIR) -I$(LIBFT_PRINTF_DIR)/libft
RM = rm -f

LIBFT_PRINTF_DIR = ./ft_printf
LIBFTPRINTF = $(LIBFT_PRINTF_DIR)/libftprintf.a

SRC = src/push_swap.c src/ft_swap.c src/ft_push.c src/ft_error.c src/ft_parse_args.c \
src/ft_reverse_rotate.c src/ft_rotate.c src/ft_stack_build.c \
src/ft_stack_helpers.c src/ft_strategy.c

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
