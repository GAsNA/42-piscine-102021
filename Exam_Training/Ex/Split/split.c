/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:49:26 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/29 11:18:45 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (str[++i] && is_charset(str[i], charset));
	while (str[i])
	{
		while (str[i] && !is_charset(str[i], charset))
			i++;
		count++;
		while (str[i] && is_charset(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset)
{
	int	i;
	char	*dup;

	i = -1;
	while (str[++i] && !is_charset(str[i], charset));
	dup = malloc((i + 1) * sizeof(char));
	if (!dup)
		return (0);
	i = -1;
	while (str[++i] && !is_charset(str[i], charset))
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	int	words;
	char	**tab;

	words = ft_count_words(str, charset);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (str[i] && j < words)
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		tab[j] = ft_strdup(&str[i], charset);
		j++;
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	tab[j] = 0;
	return (tab);
}

int	 main (int ac, char **av)
{
	char **tab = ft_split(av[1], av[2]);
	int i = -1;
	while (tab[++i])
		printf("%s\n", tab[i]);
}
