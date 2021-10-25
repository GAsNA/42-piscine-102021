/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:50:45 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/24 15:29:32 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	ft_resolve(int **tab, int **arg, int pos)
{
	int	nb;

	if (pos == 16)
		return (1);
	nb = 0;
	while (++nb <= 4)
	{
		tab[pos / 4][pos % 4] = nb;
		if (ft_check_double(tab, nb, pos) && ft_check_rules(tab, arg, pos))
		{
			if (ft_resolve(tab, arg, pos + 1))
				return (1);
		}
	}
	return (0);
}
