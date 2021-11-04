/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:17:10 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/02 21:15:03 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (0);
	elem->data = data;
	elem->next = 0;
	return (elem);
}

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                write(1, &str[i], 1);
                i++;
        }
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	*begin_list;
	t_list	*tmp;

	i = 0;
	while (i < size)
	{	
		if (!begin_list)
			begin_list = ft_create_elem(strs[i]);
		else
		{
			tmp = ft_create_elem(strs[i]);
			tmp->next = begin_list;
			begin_list = tmp;
		}
		ft_putstr(begin_list->data);
		write(1, "\n", 1);
		i++;
	}
	return (begin_list);
}

int	main(int ac, char **av)
{
	t_list *list = ft_list_push_strs(ac, av);
/*	while (list)
	{
		ft_putstr(list->data);
		write(1, "\n", 1);
		if (list->next != 0)
			list = list->next;
	}*/
}
