# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waon-in <waon-in@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 07:20:03 by waon-in           #+#    #+#              #
#    Updated: 2024/01/15 07:29:12 by waon-in          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC	= cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME):$(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re clean fclean all
