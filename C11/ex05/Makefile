# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleseur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 15:22:41 by rleseur           #+#    #+#              #
#    Updated: 2021/11/02 16:07:47 by rleseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR =		./srcs/

SRCS =		${DIR}do_op.c ${DIR}operations.c ${DIR}errors.c ${DIR}lil_ft.c ${DIR}main.c

OBJS =		${SRCS:.c=.o}

NAME =		do-op

INCLUDES =	./includes

CFLAGS =	-Wall -Werror -Wextra

all:		${NAME}

${NAME}:	${OBJS}
		gcc ${CFLAGS} $^ -o $@

.c.o:
		gcc -c ${CFLAGS} -I${INCLUDES} $^ -o $@

clean:
		rm -rf ${OBJS}

fclean:		clean
		rm -rf $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
