/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:57:39 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 08:24:10 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ---------- KO

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < size)
	{		
		j = 0;
		while (tab[i - j] < tab[i - j - 1])
		{
			tmp = tab[i - j];
			tab[i - j] = tab[i - j - 1];
			tab[i - j - 1] = tmp;
			j++;
		}
		i++;
	}
}
