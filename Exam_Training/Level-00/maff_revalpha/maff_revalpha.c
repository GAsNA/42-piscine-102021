/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:38:15 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 09:41:08 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	int	i;

	i = 26;
	while (--i >= 0)
	{
		if (i % 2 == 1)
			ft_putchar(i + 97);
		else
			ft_putchar(i + 65);
	}
	ft_putchar('\n');
	return (0);
}
