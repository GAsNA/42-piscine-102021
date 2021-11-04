/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:01:34 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/27 14:08:31 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*last;

	while (begin_list)
	{
		last = begin_list;
		begin_list = begin_list->next;
	}
	return (last);
}
