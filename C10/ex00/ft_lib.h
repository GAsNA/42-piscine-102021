/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:24:51 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/01 13:37:59 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* lil_ft.h */
void	ft_putchar(char c);
void	ft_putstr(char *str);

/* display_error.c */
void    error_no_name(void);
void    error_too_many_args(void);
void    error_no_read(void);

/* display_file.c */
void    ft_display_file(char *path);

#endif
