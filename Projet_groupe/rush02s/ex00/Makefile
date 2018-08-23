# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvinson <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/14 16:49:18 by pvinson           #+#    #+#              #
#    Updated: 2018/08/19 17:43:41 by pvinson          ###   ########.fr        #
#    Updated: 2018/08/19 00:42:58 by tbarthel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	cc

CFLAGS			=	-Wall -Wextra -Werror

IFLAG			=	-I

LFLAG			=	-L.

SRCDIR			=	srcs/
INCDIR			=	includes/
OBJDIR			=	objs/
LIBDIR			=	libs/

SRCS			=	$(wildcard $(SRCDIR)*.c)
INCLUDES		=	$(wildcard $(SRCDIR)*.h)
OBJS			=	$(SRCS:$(SRCDIR)%.c=$(OBJDIR)%.o)
LIBS			=	$(wildcard $(LIBDIR)*.a)

INCFLAG			=	$(INCLUDES:%.h=$(IFLAG)%.h)

LIBFLAG			=	$(LIBS:%.a=$(LFLAG)%.a)

NAME			=	colle-2

RM				=	rm -f

CLEAN			=	clean

all				:	$(NAME)
	
$(NAME)				:	$(OBJS)
	$(CC) $(CFlAGS) -o $@ $^ $(LFLAG) $(LIBS)

$(OBJS)			: $(OBJDIR)%.o		:	$(SRCDIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $< $(INCFLAG)

clean			:
	-$(RM) $(OBJS)

fclean			:	clean
	-$(RM) $(NAME)

re				:	fclean all
