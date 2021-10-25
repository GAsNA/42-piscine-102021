/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:17:24 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 17:22:50 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == 'z')
			ft_putchar('a');
		else if (str[i] == 'Z')
			ft_putchar('A');
		else if ((str[i] >= 'a' && str[i] < 'z')
			|| (str[i] >= 'A' && str[i] < 'Z'))
			ft_putchar(str[i] + 1);
		else
			ft_putchar(str[i]);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
