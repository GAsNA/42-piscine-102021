# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleseur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 15:34:02 by rleseur           #+#    #+#              #
#    Updated: 2021/10/24 15:34:04 by rleseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR	= ./srcs/

SRCS	= ${DIR}lil_ft.c ${DIR}tab.c ${DIR}error.c ${DIR}main.c ${DIR}resolve.c ${DIR}check_rules.c ${DIR}check_double.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-01

CFLAGS	= -Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
		gcc $(CFLAGS) -o $@ $^

.c.o:
		gcc -c ${CFLAGS} -I./includes $^ -o $@

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
