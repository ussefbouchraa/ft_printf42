# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 23:16:44 by marvin            #+#    #+#              #
#    Updated: 2022/12/02 23:16:44 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES = ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_puthex.c \
		ft_putptr.c \
		ft_printf.c \
		ft_putunsigned.c

OBJS = $(FILES:.c=.o)


all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $^

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@ 
	
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
