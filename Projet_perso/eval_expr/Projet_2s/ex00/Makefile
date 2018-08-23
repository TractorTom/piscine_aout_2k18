# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 18:16:07 by tbarthel          #+#    #+#              #
#    Updated: 2018/08/19 17:57:22 by tbarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMES = eval_expr
CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRC = ./ft_calcul.c \
	./ft_is.c \
	./ft_pass.c \
	./ft_base.c \
	./ft_operator.c \
	./ft_eval_expr.c \
	./ft_epur_str.c
ICLD = -I.

all: compilator

compilator:
	$(CC) -o $(NAMES) $(CFLAGS) *.c  $(ICLD)

clean:
	rm -f $(NAMES)

re: clean all
