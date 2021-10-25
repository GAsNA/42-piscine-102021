/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:05:02 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 09:09:11 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_a(void)
{
	write(1, "a\n", 2);
}

int	main(int ac, char **av)
{
	int	i;
	int	a;

	if (ac != 2)
		aff_a();
	else
	{
		a = 0;
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] == 'a')
				a = 1;
			i++;
		}
		if (a)
			aff_a();
	}
}
