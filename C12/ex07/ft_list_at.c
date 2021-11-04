/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:25:21 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/02 21:31:24 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (i <= nbr && begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	if (i - 1 == nbr)
		return(begin_list);
	return (0);
}
