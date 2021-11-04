/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   groups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:31:40 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/31 22:01:32 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/functions.h"

int	nb_groups(char *nbr)
{
	int	len;
	int	nb_groups;

	len = ft_strlen(nbr);
	nb_groups = len / 3;
	if (len % 3 > 0)
		nb_groups++;
	return (nb_groups);
}

char	*ft_get_in_form(char *nbr)
{
	char	*str;
	int		len;
	int		nb_zero;
	int		i;
	int		j;

	len = ft_strlen(nbr);
	nb_zero = 3 - (len % 3);
	if (nb_zero < 3)
		len += nb_zero;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = -1;
	while (nb_zero > 0 && nb_zero < 3)
	{
		str[++i] = '0';
		nb_zero--;
	}
	j = -1;
	while (i < len)
		str[++i] = nbr[++j];
	str[len] = '\0';
	return (str);
}
