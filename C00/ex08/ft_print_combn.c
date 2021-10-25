/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 09:33:21 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/21 16:09:21 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] < 10 - n)
		write(1, ", ", 2);
}

void	ft_resolve(int *tab, int n)
{
	int	i;

	while (tab[0] < 10 - n)
	{
		if (tab[n - 1] == 9)
		{
			i = 1;
			while (tab[n - 1 - i] == 9 - i)
				i++;
			tab[n - 1 - i] += 1;
			while (i > 0)
			{
				tab[n - i] = tab[n - i - 1] + 1;
				i--;
			}
		}
		else
			tab[n - 1]++;
		ft_print(tab, n);
	}
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	i;

	if (n > 0 && n < 10)
	{
		i = 0;
		while (i < n)
		{
			tab[i] = i;
			i++;
		}
		ft_print(tab, n);
		ft_resolve(tab, n);
	}
}
