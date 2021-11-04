/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momadani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 18:19:43 by momadani          #+#    #+#             */
/*   Updated: 2021/10/31 23:39:02 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/functions.h"

int	ft_puterror(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	ft_put_dico_error(void)
{
	write(1, "Dict Error\n", 11);
	return (1);
}

int	display_digits(char *digits)
{
	if (digits == NULL)
		return (-1);
	while (*digits && *digits != '\n')
	{
		write(1, digits, 1);
		digits++;
	}
	write(1, " ", 1);
	return (0);
}
