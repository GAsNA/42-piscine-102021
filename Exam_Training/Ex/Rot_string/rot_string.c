/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 13:17:45 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/22 14:07:16 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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



void	ft_rot_string(char *str)
{
	int	i;

	
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rot_string(av[1]);
	ft_putchar('\n');
	return (0);
}
