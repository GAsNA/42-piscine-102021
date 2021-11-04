/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 21:06:56 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/30 11:31:42 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	counter_words(char *str, char *charset)
{
	int	i;
	int	nb_words;

	i = 0;
	while (str[i] && is_charset(str[i], charset))
		i++;
	nb_words = 0;
	while (str[i])
	{
		while (str[i] && !is_charset(str[i], charset))
			i++;
		nb_words++;
		while (str[i] && is_charset(str[i], charset))
			i++;
	}
	return (nb_words);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*dest;
	int		i;
	int		len;

	len = 0;
	while (src[len] && !is_charset(src[len], charset))
		len++;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (src[i] && !is_charset(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		nb_words;
	int		i;
	int		j;

	nb_words = counter_words(str, charset);
	tab = malloc((nb_words + 1) * sizeof(char *));
	if (!tab)
		return (0);
	i = 0;
	j = 0;
	while (str[i] && j < nb_words)
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
