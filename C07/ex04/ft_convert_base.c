/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:07:48 by rleseur           #+#    #+#             */
/*   Updated: 2021/11/03 19:21:05 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_check_base(char *base);
int	ft_find_pos(char c, char *base);
int	ft_nbrlen_base(long nb, int len_base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\f' || str[i] == '\r')
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	res = 0;
	while (ft_find_pos(str[i], base) != -1)
	{
		res *= ft_strlen(base);
		res += ft_find_pos(str[i], base);
		i++;
	}
	return (res * sign);
}

char	*ft_itoa_base(int nb, char *base)
{
	int		i;
	int		size;
	long	n;
	char	*res;

	n = nb;
	size = ft_nbrlen_base(n, ft_strlen(base));
	res = malloc((size + 1) * sizeof(char));
	if (!res)
		return (0);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	if (n == 0)
		res[0] = base[0];
	i = size;
	while (n > 0)
	{
		res[--i] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	res[size] = '\0';
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	if (!ft_check_base(base_from) || !ft_check_base(base_to))
		return (0);
	return (ft_itoa_base(ft_atoi_base(nbr, base_from), base_to));
}

int	main(int ac, char **av)
{
	printf("%s\n", ft_convert_base(av[1], av[2], av[3]));
}
