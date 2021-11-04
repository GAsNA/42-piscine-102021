/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:23:14 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/29 13:29:42 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_supp(char c, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			j = i;
			while (str[j])
			{
				str[j] = str[j + 1];
				j++;
			}
		}
		else
			i++;
	}
	return (str);
}

void	ft_union(char *s1, char *s2)
{
	while (s1[0] || s2[0])
	{
		if (s1[0] && s2[0])
		{
			ft_putchar(s1[0]);
			s2 = ft_supp(s1[0], s2);
			s1 = ft_supp(s1[0], s1);
		}
		else if (!s1[0])
		{
			ft_putchar(s2[0]);
			s2 = ft_supp(s2[0], s2);
		}
		else if (!s2[0])
		{
			ft_putchar(s1[0]);
			s1 = ft_supp(s1[0], s1);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
