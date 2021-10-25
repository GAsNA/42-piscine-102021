/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 21:48:30 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/24 15:25:18 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	ft_check_double(int **tab, int nb, int pos)
{
	int	i;

	i = 0;
	while (i < pos / 4)
	{
		if (tab[i][pos % 4] == nb)
			return (0);
		i++;
	}
	i = 0;
	while (i < pos % 4)
	{
		if (tab[pos / 4][i] == nb)
			return (0);
		i++;
	}
	return (1);
}
