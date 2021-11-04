/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:37:55 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/27 13:40:50 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ist.h"

int	ft_list_size(t_list *begin_list)
{
	int	counter;

	counter = 0;
	while (begin_list)
	{
		counter++;
		begin_list = begin_list->next;
	}
	return (counter);
}
