# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbarthel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 23:43:18 by tbarthel          #+#    #+#              #
#    Updated: 2018/08/20 03:14:03 by tbarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMES = ft_advanced_do-op
CC = gcc
CFLAGS = -Werror -Wextra -Wall

all: compilator

compilator:
	$(CC) -o $(NAMES) $(CFLAGS) *.c

clean:
	rm -f $(NAMES)

re: clean all
