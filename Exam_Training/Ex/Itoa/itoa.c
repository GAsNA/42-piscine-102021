/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:44:14 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/22 12:16:04 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_nbrlen(long nb)
{
	int	len;

	if (nb == 0)
		return (1);
	len = 0;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int	i;
	int	len;
	long	n;
	int	sign;

	n = nb;
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	len = ft_nbrlen(n);
	if (sign)
		len++;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		if ((len - 1 - i) == 0 && sign)
			str[0] = '-';
		else
		{
			str[len - 1 - i] = (n % 10) + '0';
			n /= 10;
		}
		i++;
	}
	str[len] = '\0';
	return (str);
}

#include <stdio.h>

int main()
{
    printf("%s\n", ft_itoa(-42));

    return 0;
}
