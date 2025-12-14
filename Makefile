# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/28 10:39:55 by wiaon-in          #+#    #+#              #
#    Updated: 2025/12/14 17:03:21 by wiaon-in         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = libftprintf.a

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

LIBFT_DIR   = libft
LIBFT_A     = $(LIBFT_DIR)/libft.a

SRC         = ft_printf.c ft_printf_utils.c
OBJ         = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	mv $(LIBFT_A) .
	ar x libft.a
	ar rcs $(NAME) $(OBJ) *.o
	rm -f *.o libft.a

%.o: %.c
	$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME) ft_printf.h.gch a.out
	$(MAKE) -C $(LIBFT_DIR) fclean 

re: fclean all

.PHONY: all clean fclean re




	