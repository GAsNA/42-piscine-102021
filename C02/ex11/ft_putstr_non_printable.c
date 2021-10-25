/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:39:57 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/21 15:58:58 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_put_hexa(char c)
{
	int		i;
	char	*hexa;

	i = c;
	if (i < 0)
		i += 256;
	hexa = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexa[i / 16]);
	ft_putchar(hexa[i % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_is_printable(str[i]))
			ft_put_hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
