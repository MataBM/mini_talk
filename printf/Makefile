# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bantunes <bantunes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 14:14:56 by bantunes          #+#    #+#              #
#    Updated: 2022/09/20 12:23:10 by bantunes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#PROG = test
NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS =	ft_printf.c \
    	ft_putnbr_fd.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		process.c \
		ft_putnbr_base.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)
#	$(CC) -lftprintf $(CFLAGS) $(SRCS) -o $(PROG) -L.

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean all re