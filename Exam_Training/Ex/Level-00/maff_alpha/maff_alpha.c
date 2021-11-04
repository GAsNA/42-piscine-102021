/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:30:14 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 09:40:51 by rleseur          ###   ########.fr       */
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

	i = -1;
	while (++i < 26)
	{
		if (i % 2 == 0)
			ft_putchar(i + 'a');
		else
			ft_putchar(i + 'A');
	}
	ft_putchar('\n');
	return (0);
}
