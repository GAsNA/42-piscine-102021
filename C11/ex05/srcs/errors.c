/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:03:26 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/02 20:39:03 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_lib.h"

void	ft_put_error_div(void)
{
	ft_putstr("Stop : division by zero");
}

void	ft_put_error_mod(void)
{
	ft_putstr("Stop : modulo by zero");
}
