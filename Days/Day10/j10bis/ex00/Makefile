# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 18:16:07 by tbarthel          #+#    #+#              #
#    Updated: 2018/08/17 16:14:35 by tbarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMES = libft.a
CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRC = ./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c \
	./srcs/ft_swap.c
ICLD = -I./includes/
OBJ = ./ft_putchar.o \
	./ft_putstr.o \
	./ft_strcmp.o \
	./ft_strlen.o \
	./ft_swap.o

all: create_lib

create_lib: create_o
	ar rc $(NAMES) $(OBJ)

create_o:
	$(CC) -c $(CFLAGS) $(SRC) $(ICLD)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAMES)

re: fclean all
