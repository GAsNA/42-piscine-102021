/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:36:43 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/01 13:51:40 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	ft_display_file(char *path)
{
	int		fd;
	char	bf;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		error_no_read();
	else
	{
		while (read(fd, &bf, 1))
			ft_putchar(bf);
	}
	close(fd);
}
