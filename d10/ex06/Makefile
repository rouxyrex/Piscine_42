# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdebord <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/22 16:41:31 by rdebord           #+#    #+#              #
#    Updated: 2017/08/22 16:41:33 by rdebord          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

FLAGS = -Wall -Werror -Wextra

SRCS =	main.c \
 		fonctions.c \
 		itoa.c \
 		operation.c

BIN =	main.o \
 		fonctions.o \
 		itoa.o \
 		operation.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	gcc $(BIN) -o $(NAME)

clean:
	rm -f $(BIN)

fclean: clean
	rm -f $(NAME)

re: fclean all
