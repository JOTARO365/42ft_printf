# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wiaon-in <wiaon-in@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/27 01:45:46 by wiaon-in          #+#    #+#              #
#    Updated: 2025/09/28 17:50:06 by wiaon-in         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= 		libft.a

DOT		:= 		.c

FT		:= 		ft_

CC		:= 		cc

BONUS	:= 		_bonus

CFLAGS	:= 		-Wall -Werror -Wextra -g3

SRC_B	:=		

SRC		:=		isalpha isdigit isalnum isascii isprint \
				strlen memset bzero memcpy memcmp memmove strlcpy \
				strlcat toupper tolower strchr strrchr strncmp \
				memchr strnstr atoi calloc strdup substr \
				strjoin strtrim split itoa strmapi striteri putchar_fd \
				putstr_fd putendl_fd putnbr_fd putnbr_base lstnew \
				lstadd_front lstadd_back lstsize lstlast lstdelone \
				lstclear lstiter lstmap

FILES	:=		$(addprefix $(FT), $(addsuffix $(DOT), $(SRC)))

OBJS	:=		$(FILES:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
	ar rcs $@ $^

%.o:%.c 
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBJS_B) *.h.gch *.out

fclean:			clean
	rm -rf $(NAME)

re:				fclean all
	
.PHONY: all clean fclean re
