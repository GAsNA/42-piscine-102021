/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:44:11 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 13:33:17 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	while (str[++i])
	{
		j = 1;
		if (str[i] >= 'a' && str[i] <= 'z')
			j += str[i] - 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			j += str[i] - 'A';
		k = -1;
		while(++k < j)
			ft_putchar(str[i]);

	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	ft_putchar('\n');
	return (0);
}
