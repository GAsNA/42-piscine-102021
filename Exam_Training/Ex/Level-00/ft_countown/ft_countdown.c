/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:20:58 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 09:23:57 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main()
{
	int	i;

	i = ':';
	while (--i >= '0')
		write(1, &i, 1);
	write(1, "\n", 1);
	return (0);
}
