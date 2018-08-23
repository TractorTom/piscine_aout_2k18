# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/15 16:03:17 by nbenazzo          #+#    #+#              #
#    Updated: 2018/08/21 19:08:49 by nbenazzo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ

CC = gcc

CFLAGS = -Wall -Werror -Wextra -o

SRCS = 		./readtotab.c \
		./readfirstgrid.c \
		./readfirstline.c \
		./main.c \
		./src/*.c \
		./src_analyse/*.c\

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(NAME) $(SRCS)
clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
