/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:56:01 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/26 11:35:46 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	aff_params(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i + (++j)])
		{
			if (ft_strcmp(av[i], av[i + j]) > 0)
			{
				tmp = av[i];
				av[i] = av[i + j];
				av[i + j] = tmp;
			}
		}
	}
	aff_params(ac, av);
	return (0);
}
