/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:47:26 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/25 08:25:01 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ---------- KO

#include <unistd.h>

void	ft_put_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[c / 16], 1);
	write(1, &hexa[c % 16], 1);
}

void	ft_print_addr(size_t num)
{
	char	str[255];
	int		i;

	i = 0;
	while (num > 0)
	{
		str[i] = ("0123456789abcdef"[num % 16]);
		num = num / 16;
		i++;
	}
	while (i <= 16)
	{
		str[i] = '0';
		i++;
	}
	str[i] = '\0';
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, ": ", 2);
}

void	ft_print_hexa(void *addr, unsigned int size, int i)
{
	unsigned int		j;
	char				*str;

	str = addr;
	j = 0;
	while (j < 16 && (i + j) < size)
	{
		ft_put_hexa(str[i + j]);
		if (j % 2 == 1)
			write(1, " ", 1);
		j++;
	}
}

void	ft_print_str(void *addr, unsigned int size, int i)
{
	unsigned int		j;
	char				*str;

	str = addr;
	j = 0;
	while (j < 16 && (i + j) < size)
	{
		if (str[i + j] >= 32 && str[i + j] <= 126)
			write(1, &str[i + j], 1);
		else
			write(1, ".", 1);
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size == 0)
		return (addr);
	i = 0;
	while (i < size)
	{
		ft_print_addr((size_t)(addr + i));
		ft_print_hexa(addr, size, i);
		if ((i + 16) > size)
		{
			j = 0;
			while ((((size - i) / 2) + ((size - i) * 2) + j) < 40)
			{
				write(1, " ", 1);
				j++;
			}
		}
		ft_print_str(addr, size, i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
