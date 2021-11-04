/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 19:14:18 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/01 16:09:47 by rleseur          ###   ########.fr       */
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

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	while (str[i] && is_charset(str[i], charset))
		i++;
	count = 0;
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
	int		i;
	char	*dup;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	dup = malloc((i + 1) * sizeof(char));
	if (!dup)
		return (0);
	i = 0;
	while (str[i] && !is_charset(str[i], charset))
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		words;
	char	**tab;

	words = count_word(str, charset);
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
		if (!tab[j])
			return (0);
		j++;
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	tab[j] = 0;
	return (tab);
}
