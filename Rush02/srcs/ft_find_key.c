/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:50:03 by agras             #+#    #+#             */
/*   Updated: 2021/10/31 23:24:00 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/functions.h"

int	extract_nb(char *str, int i, int len)
{
	int	j;

	j = 0;
	while (str[i + j] && str[i + j] != ':')
	{
		if (str[i + j] == '\n')
			return (-1);
		j++;
	}
	if (i != 0)
	{
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			return (-1);
	}
	if (str[i + len] >= '0' && str[i + len] <= '9')
		return (-1);
	return (0);
}	

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(to_find);
	while (str[i])
	{
		j = 0;
		if (str[i] == *to_find && extract_nb(str, i, len) == 0)
		{
			while (str[i + j] == to_find[j])
			{
				if (j + 1 >= len)
					return (&str[i]);
				j++;
			}
		}
		i += j;
		if (j == 0)
			i++;
	}
	return (NULL);
}

char	*find_nb(char *dico, char *to_find)
{
	char	*line;

	line = ft_strstr(dico, to_find);
	if (line == NULL)
		return (NULL);
	while (*line && *line != ':')
		line++;
	line++;
	while (*line && *line == ' ')
		line++;
	return (line);
}
