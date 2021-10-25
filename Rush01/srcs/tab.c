/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 16:01:14 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/24 15:30:19 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

void	ft_print_tab(int **tab)
{
	int	y;
	int	x;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_putnbr(tab[y][x]);
			if (x < 3)
				ft_putchar(' ');
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}

int	**ft_init_tab(void)
{
	int	**tab;
	int	i;
	int	j;

	tab = malloc(4 * sizeof(int *));
	if (!tab)
		return (0);
	i = 0;
	while (i < 4)
	{
		tab[i] = malloc(4 * sizeof(int));
		if (!tab)
			return (0);
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
