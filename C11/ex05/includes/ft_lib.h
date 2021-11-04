/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:35:41 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/02 20:40:19 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>

/* do_op.c */
void	ft_operation(int nb1, void (*f)(int, int), int nb2);
void	do_op(char *nb1, char *op, char *nb2);

/* operations.c */
void	addition(int nb1, int nb2);
void	soustraction(int nb1, int nb2);
void	division(int nb1, int nb2);
void	multiplication(int nb1, int nb2);
void	modulo(int nb1, int nb2);

/* errors.c */
void	ft_put_error_div(void);
void	ft_put_error_mod(void);

/* lil_ft.c */
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);

#endif
