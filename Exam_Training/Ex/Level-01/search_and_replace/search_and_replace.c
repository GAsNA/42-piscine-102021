/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:13:24 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 18:20:04 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	s_and_r(char *str, char *search, char *replace)
{
	int	i;

	if (!search[1] && !replace[1])
	{
		i = -1;
		while (str[++i])
		{
			if (str[i] == search[0])
				ft_putchar(replace[0]);
			else
				ft_putchar(str[i]);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
		s_and_r(av[1], av[2], av[3]);
	ft_putchar('\n');
	return (0);
}
