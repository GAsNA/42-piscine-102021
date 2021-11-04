/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:50:12 by momadani          #+#    #+#             */
/*   Updated: 2021/10/31 23:18:23 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/functions.h"

int	ft_check(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 2 && ac != 3)
		return (0);
	while ((av[ac - 1][i] >= 9 && av[ac - 1][i] <= 13) || av[ac - 1][i] == 32)
		i++;
	if (av[ac - 1][i] == '+')
		i++;
	while (av[ac - 1][i])
	{
		if (!(av[ac - 1][i] >= '0' && av[ac - 1][i] <= '9'))
			return (0);
		i++;
	}
	return (!(av[ac - 1][i]));
}

int	ft_check_dict(char *dict)
{
	while (*dict)
	{
		while ((*dict >= 9 && *dict <= 13) || *dict == 32)
			dict++;
		if (*dict == '+')
			dict++;
		while (*dict >= '0' && *dict <= '9')
			dict++;
		while ((*dict >= 33 && *dict <= 126) && *dict != ':')
			dict++;
		while (*dict == 32)
			dict++;
		if (*(dict)++ != ':')
			return (0);
		while (*dict == 32)
			dict++;
		while (*dict >= 32 && *dict <= 126)
			dict++;
		if (*dict != '\0' || *dict == '\n')
			return (0);
		while (*dict == '\n')
			dict++;
	}
	return (1);
}

int	if_zero(char *nb, char *dic)
{
	if (nb[2] == '0' && nb[1] == '0' && nb[0] == '0')
	{
		if (display_digits(find_nb(dic, "0")) == -1)
			return (ft_put_dico_error());
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*dic;
	char	*nb;
	int		group_n;

	if (!(ft_check(argc, argv)))
		return (ft_puterror());
	if (argc > 2)
		dic = ft_get_dico(argv[1]);
	else
		dic = ft_get_dico("resources/numbers.dict.txt");
	if (!(dic))
		return (ft_puterror());
	nb = ft_get_in_form(argv[argc - 1]);
	if (!(nb))
		return (ft_puterror());
	if (if_zero(nb, dic) == 0)
	{
		group_n = nb_groups(nb);
		if (translate_nb(nb, dic, group_n) == NULL)
			return (ft_put_dico_error());
	}
	free(nb);
	free(dic);
	return (0);
}
