/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 20:26:35 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/27 20:33:04 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(t_list * sizeof(t_list));
	if (!elem)
		return (0);
	elem->data = data;
	elem->next = 0;
	return (elem);
}
