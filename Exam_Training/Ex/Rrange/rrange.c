/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrange.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:14:19 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/28 13:51:23 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*range;
	int	diff;
	int	sens;
	int	i;

	diff = end - start;
	sens = 1;
	if (diff < 0)
		sens = -1;
	range = malloc(((diff * sens) + 1) * sizeof(int));
	if (!range)
		return (0);
	i = 0;
	while (i <= diff * sens)
	{
		range[i] = start;
		i++;
		if (sens == 1)
			start++;
		else
			start--;
	}
	return (range);
}
