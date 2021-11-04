/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 11:33:06 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/29 11:42:36 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = -1;
	while (str[++i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\n' || str[i] == '\r' || str[i] == '\f');
	sign = 1;
	i--;
	while (str[++i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
	}
	res = 0;
	i--;
	while (str[++i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i] - '0';
	return (res * sign);
}

int	main(int ac, char **av)
{
	printf("%i\n", ft_atoi(av[1]));
	return (0);
}
