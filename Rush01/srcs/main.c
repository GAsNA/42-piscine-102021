/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:46:00 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/24 15:28:51 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib.h"

int	ft_verif_entry(char *str)
{
	int	i;

	if (ft_strlen(str) != 31)
		return (0);
	i = 0;
	while (str[i])
	{
		if (i % 2 == 0 && str[i] >= '1' && str[i] <= '4')
			i++;
		else if (i % 2 == 1 && str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}

int	**ft_get_args(char *arg)
{
	int	**args;
	int	i;
	int	j;
	int	k;

	args = malloc(4 * sizeof(int *));
	if (!args)
		return (0);
	k = 0;
	i = 0;
	while (i < 4)
	{
		args[i] = malloc(4 * sizeof(int));
		if (!args)
			return (0);
		j = 0;
		while (j < 4)
		{
			args[i][j] = arg[k] - '0';
			k += 2;
			j++;
		}
		i++;
	}
	return (args);
}

int	main(int ac, char **av)
{
	int	**tab;
	int	**arg;

	if (ac == 2 && ft_verif_entry(av[1]))
	{
		tab = ft_init_tab();
		arg = ft_get_args(av[1]);
		if (ft_resolve(tab, arg, 0))
			ft_print_tab(tab);
		else
			ft_error();
	}
	else
		ft_error();
	return (0);
}
