# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 23:43:18 by tbarthel          #+#    #+#              #
#    Updated: 2018/08/17 02:11:46 by tbarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMES = do-op
CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRCS = ./ft_base.c \
	./ft_operator.c \
	./ft_calculator.c \
	./ft_atoi.c

all: compilator

compilator:
	$(CC) -o $(NAMES) $(CFLAGS) $(SRCS)

clean:
	rm -f $(NAMES)

re: clean all
