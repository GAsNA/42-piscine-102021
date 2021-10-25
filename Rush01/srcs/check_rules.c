/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_rules.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:45:54 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/24 15:18:24 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	ft_check_row_left(int **tab, int **arg, int pos)
{
	int	i;
	int	nb_towers;
	int	max;

	if (pos % 4 != 3)
		return (1);
	nb_towers = 0;
	max = 0;
	i = -1;
	while (++i < 4)
	{
		if (tab[pos / 4][i] > max)
		{
			max = tab[pos / 4][i];
			nb_towers++;
		}
	}
	if (nb_towers != arg[2][pos / 4])
		return (0);
	return (1);
}

int	ft_check_row_right(int **tab, int **arg, int pos)
{
	int	i;
	int	nb_towers;
	int	max;

	if (pos % 4 != 3)
		return (1);
	nb_towers = 0;
	max = 0;
	i = 4;
	while (--i >= 0)
	{
		if (tab[pos / 4][i] > max)
		{
			max = tab[pos / 4][i];
			nb_towers++;
		}
	}
	if (nb_towers != arg[3][pos / 4])
		return (0);
	return (1);
}

int	ft_check_col_up(int **tab, int **arg, int pos)
{
	int	i;
	int	nb_towers;
	int	max;

	if (pos / 4 != 3)
		return (1);
	nb_towers = 0;
	max = 0;
	i = -1;
	while (++i < 4)
	{
		if (tab[i][pos % 4] > max)
		{
			max = tab[i][pos % 4];
			nb_towers++;
		}
	}
	if (nb_towers != arg[0][pos % 4])
		return (0);
	return (1);
}

int	ft_check_col_down(int **tab, int **arg, int pos)
{
	int	i;
	int	nb_towers;
	int	max;

	if (pos / 4 != 3)
		return (1);
	nb_towers = 0;
	max = 0;
	i = 4;
	while (--i >= 0)
	{
		if (tab[i][pos % 4] > max)
		{
			max = tab[i][pos % 4];
			nb_towers++;
		}
	}
	if (nb_towers != arg[1][pos % 4])
		return (0);
	return (1);
}

int	ft_check_rules(int **tab, int **arg, int pos)
{
	if (!ft_check_row_left(tab, arg, pos))
		return (0);
	if (!ft_check_row_right(tab, arg, pos))
		return (0);
	if (!ft_check_col_up(tab, arg, pos))
		return (0);
	if (!ft_check_col_down(tab, arg, pos))
		return (0);
	return (1);
}
