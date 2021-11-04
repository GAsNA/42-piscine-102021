# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleseur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 22:29:32 by rleseur           #+#    #+#              #
#    Updated: 2021/10/27 22:42:45 by rleseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR =		./srcs/

SRCS =		${DIR}ft_putchar.c ${DIR}ft_swap.c ${DIR}ft_putstr.c ${DIR}ft_strlen.c ${DIR}ft_strcmp.c

OBJS =		${SRCS:.c=.o}

NAME =		libft.a

CFLAGS =	-Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
		ar rc ${NAME} ${<:.c=.o}

.c.o:
		gcc ${CFLAGS} -I./includes -c $^ -o $@

clean:
		rm -rf ${OBJS}

fclean:		clean
		rm -rf ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
