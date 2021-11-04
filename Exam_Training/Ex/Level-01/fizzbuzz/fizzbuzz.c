/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:29:36 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 12:35:59 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_putchar(str[i]);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
}

int	main(void)
{
	int	i;

	i = 0;
	while (++i <= 100)
	{
		if (i % 3 == 0)
			ft_putstr("fizz");
		if (i % 5 == 0)
			ft_putstr("buzz");
		if (i % 3 != 0 && i % 5 != 0)
			ft_putnbr(i);
		ft_putchar('\n');
	}
}
