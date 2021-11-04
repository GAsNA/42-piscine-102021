# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agras <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/31 20:57:01 by agras             #+#    #+#              #
#    Updated: 2021/10/31 23:39:38 by agras            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR =		./srcs/

SRCS =		${DIR}main.c ${DIR}dico.c ${DIR}display.c ${DIR}ft_bloc_handling.c ${DIR}ft_bloc_printing.c ${DIR}ft_find_key.c ${DIR}groups.c ${DIR}main.c ${DIR}utilities/ft_strcat.c ${DIR}utilities/ft_strcpy.c ${DIR}utilities/ft_strlen.c

OBJS =		${SRCS:.c=.o}

NAME =		rush-02

CFLAGS =	-Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
		gcc $(CFLAGS) -o $@ $^

.c.o:
		gcc -c ${CFLAGS} -I./headers $^ -o $@

clean:
		rm -f ${OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
