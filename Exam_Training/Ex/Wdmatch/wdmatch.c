/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:51:45 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/22 11:43:29 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check_str(char *word, char *str)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i] && word[j])
	{
		if (str[i] == word[j])
			j++;
		i++;
	}
	if (j == ft_strlen(word))
		return (1);
	return (0);
}

void	ft_wdmatch(char *word, char *str)
{
	int	i;
	int	j;

	if (ft_check_str(word, str))
	{
		i = 0;
		j = 0;
		while (word[j])
		{
			if (str[i] == word[j])
			{
				ft_putchar(str[i]);
				j++;
			}
			i++;
		}
	}
}

int	main (int ac, char **av)
{
	if (ac == 3)
		ft_wdmatch(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
