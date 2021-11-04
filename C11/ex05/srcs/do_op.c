/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:39:31 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/03 14:39:12 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_operation(int nb1, void (*f)(int, int), int nb2)
{
	(*f)(nb1, nb2);
}

void	do_op(char *nb1, char *op, char *nb2)
{
	int	nbr1;
	int	nbr2;

	nbr1 = ft_atoi(nb1);
	nbr2 = ft_atoi(nb2);
	if (ft_strlen(op) == 1)
	{
		if (op[0] == '+')
			ft_operation(nbr1, &addition, nbr2);
		else if (op[0] == '-')
			ft_operation(nbr1, &soustraction, nbr2);
		else if (op[0] == '/')
			ft_operation(nbr1, &division, nbr2);
		else if (op[0] == '*')
			ft_operation(nbr1, &multiplication, nbr2);
		else if (op[0] == '%')
			ft_operation(nbr1, &modulo, nbr2);
		else
			ft_putchar('0');
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
}
