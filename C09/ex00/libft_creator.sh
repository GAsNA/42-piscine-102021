# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rleseur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 22:09:05 by rleseur           #+#    #+#              #
#    Updated: 2021/10/27 22:35:08 by rleseur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS='ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c'

gcc -c ${SRCS} && ar rc libft.a *.o