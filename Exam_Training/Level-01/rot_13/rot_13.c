/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:14:00 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 15:21:26 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] >= 'a' && str[i] <= 'm')
			|| (str[i] >= 'A' && str[i] <= 'M'))
			ft_putchar(str[i] + 13);
		else if ((str[i] > 'm' && str[i] <= 'z')
			|| (str[i] > 'M' && str[i] <= 'Z'))
			ft_putchar(str[i] - 13);
		else
			ft_putchar(str[i]);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	ft_putchar('\n');
	return (0);
}
