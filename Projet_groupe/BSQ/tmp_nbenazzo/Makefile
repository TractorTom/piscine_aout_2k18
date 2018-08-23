# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbenazzo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/15 16:03:17 by nbenazzo          #+#    #+#              #
#    Updated: 2018/08/21 23:04:27 by tbarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ

CC = gcc

CFLAGS = -Wall -Werror -Wextra -o

SRCS = ./readtotab.c \
	   ./main.c \
	   ./src_analyse/*.c \
		src/*.c \

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRCS)
clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
