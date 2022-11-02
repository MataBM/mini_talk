# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 15:43:47 by bantunes          #+#    #+#              #
#    Updated: 2022/10/31 12:00:20 by bantunes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_C = client

NAME_S = server

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address
RM = rm -f

SOURCE_C	=	client.c

SOURCE_S	=	server.c

OBJS_C = $(SOURCE_C:.c=.o)

OBJS_S = $(SOURCE_S:.c=.o)

all: $(NAME_C) $(NAME_S)

$(NAME_C):	$(OBJS_C)
	cd libft;make all
	cd libft;make bonus
	cd printf;make all
	$(CC) $(CFLAGS) $(OBJS_C) -I. -lft -lftprintf -o $(NAME_C) -L./libft -L./printf

$(NAME_S):	$(OBJS_S)
	cd libft;make all
	cd libft;make bonus
	cd printf;make all
	$(CC) $(CFLAGS) $(OBJS_S) -I. -lft -lftprintf -o $(NAME_S) -L./libft -L./printf

clean:
	$(RM) $(OBJS_C) $(OBJS_S)
	cd libft;make clean
	cd printf;make clean

fclean:	clean
	cd libft;make fclean
	cd printf;make fclean
	$(RM) $(NAME_C) $(NAME_S)

re: fclean $(NAME_C) $(NAME_S)

.PHONY: clean fclean all re
