/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 15:58:43 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/24 15:31:52 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <unistd.h>
# include <stdlib.h>

/* lil_ft.c */
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);

/* tab.c */
void	ft_print_tab(int **tab);
int		**ft_init_tab(void);

/* error.c */
void	ft_error(void);

/* main.c */
int		ft_verif_entry(char *str);
int		**ft_get_args(char *arg);

/* resolve.c */
int		ft_resolve(int **tab, int **arg, int pos);

/* check_rules.c */
int		ft_check_row_left(int **tab, int **arg, int pos);
int		ft_check_row_right(int **tab, int **arg, int pos);
int		ft_check_col_up(int **tab, int **arg, int pos);
int		ft_check_col_down(int **tab, int **arg, int pos);
int		ft_check_rules(int **tab, int **arg, int pos);

/* check_double.c */
int		ft_check_double(int **tab, int nb, int pos);

#endif
