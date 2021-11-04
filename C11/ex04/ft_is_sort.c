/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:36:42 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/03 15:08:07 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_ok(int diff_base, int new_diff)
{
	if ((diff_base < 0 && new_diff < 0) || (diff_base > 0 && new_diff > 0))
		return (1);
	return (0);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	diff;

	if (length <= 2)
		return (1);
	diff = (*f)(tab[0], tab[1]);
	i = 1;
	while (i < length - 1)
	{
		if (diff == 0)
			diff = (*f)(tab[i], tab[i + 1]);
		else if ((*f)(tab[i], tab[i + 1]) != 0
			&& !is_ok(diff, (*f)(tab[i], tab[i + 1])))
			return (0);
		i++;
	}
	return (1);
}
