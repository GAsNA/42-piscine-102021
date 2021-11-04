# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleseur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 13:42:34 by rleseur           #+#    #+#              #
#    Updated: 2021/11/01 13:50:47 by rleseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		display_error.c display_file.c lil_ft.c main.c

OBJS =		${SRCS:.c=.o}

CFLAGS =	-Wall -Wextra -Werror

NAME =		ft_display_file

all:		${NAME}

${NAME}:	${OBJS}
		gcc ${CFLAGS} -o $@ $^

.c.o:		
		gcc -c ${CFLAGS} -I. $^ -o $@

clean:
		rm -rf ${OBJS}

fclean:		clean
		rm -rf ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
