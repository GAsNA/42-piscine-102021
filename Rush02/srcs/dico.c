/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dico.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 21:57:17 by momadani          #+#    #+#             */
/*   Updated: 2021/10/31 21:57:19 by momadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/functions.h"

int	length_dico(char *path)
{
	int		size;
	int		fd;
	char	bf;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror();
		return (0);
	}
	size = 0;
	while (read(fd, &bf, 1) != 0)
		size++;
	close(fd);
	return (size + 1);
}

char	*ft_get_dico(char *path)
{
	char	*str;
	int		i;
	int		fd;
	char	bf;

	str = malloc(length_dico(path) * sizeof(char));
	if (!str)
		return (0);
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	i = 0;
	while (read(fd, &bf, 1) != 0)
	{
		str[i] = bf;
		i++;
	}
	str[i] = '\0';
	close(fd);
	return (str);
}
