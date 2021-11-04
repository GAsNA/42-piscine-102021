/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:18:34 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/01 13:24:42 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

void	error_no_name(void)
{
	ft_putstr("File name missing.\n");
}

void	error_too_many_args(void)
{
	ft_putstr("Too many arguments.\n");
}

void	error_no_read(void)
{
	ft_putstr("Cannot read file.\n");
}
