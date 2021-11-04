/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:58:09 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/02 19:24:25 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	addition(int nb1, int nb2)
{
	ft_putnbr(nb1 + nb2);
}

void	soustraction(int nb1, int nb2)
{
	ft_putnbr(nb1 - nb2);
}

void	division(int nb1, int nb2)
{
	if (nb2 == 0)
		ft_put_error_div();
	else
		ft_putnbr(nb1 / nb2);
}

void	multiplication(int nb1, int nb2)
{
	ft_putnbr(nb1 * nb2);
}

void	modulo(int nb1, int nb2)
{
	if (nb2 == 0)
		ft_put_error_mod();
	else
		ft_putnbr(nb1 % nb2);
}
