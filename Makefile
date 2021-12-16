# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fleitz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 15:40:50 by fleitz            #+#    #+#              #
#    Updated: 2021/12/16 10:32:03 by fleitz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS		= ft_printf.c				\
			  ft_putchar.c				\
			  ft_putnbr.c				\
			  ft_putnbr_16.c			\
			  ft_putnbr_unsigned.c		\
			  ft_putptr.c				\
			  ft_putstr.c				\
			  ft_select.c				\
			  ft_strlen.c				\

OBJS		= ${SRCS:.c=.o}

HEADERS		= ft_printf.h

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	${OBJS}
			ar -rcs ${NAME} ${OBJS} ${HEADERS}

%.o: %.c
			${CC} ${CFLAGS} -c $< -o $@

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
