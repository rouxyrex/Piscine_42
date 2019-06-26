# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdebord <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 01:36:49 by rdebord           #+#    #+#              #
#    Updated: 2017/08/21 02:37:59 by rdebord          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBNAME = libft.a

FLAGS = -Wall -Werror -Wextra -Iincludes -c

SRCS = 	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

BIN = 	ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o


all: $(LIBNAME)

$(LIBNAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(LIBNAME) $(BIN)
	ranlib $(LIBNAME)

clean:
	rm -f $(BIN)

fclean: clean
	rm -f $(LIBNAME)

re: fclean all
