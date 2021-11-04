/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:29:05 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/02 20:36:34 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_r;

	tab_r = malloc(length * sizeof(int));
	if (!tab_r)
		return (0);
	i = 0;
	while (i < length)
	{
		tab_r[i] = (*f)(tab[i]);
		i++;
	}
	return (tab_r);
}
