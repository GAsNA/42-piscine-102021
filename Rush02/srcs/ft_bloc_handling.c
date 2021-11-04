/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bloc_handling.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 19:42:45 by agras             #+#    #+#             */
/*   Updated: 2021/10/31 22:51:58 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/functions.h"

char	*extract_str(char *start, char *end)
{
	char	*str;
	 int	len;
	 int	i;

	i = -1;
	len = end - start + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (++i < len)
		str[i] = start[i];
	str[i] = '\0';
	return (str);
}

char	*get_thousands(char *thousand, int group_n)
{
	char	*next_thousand;

	if (group_n == 0)
		return (thousand);
	next_thousand = malloc(ft_strlen(thousand) + 4);
	if (next_thousand == NULL)
		return (NULL);
	ft_strcpy(next_thousand, thousand);
	ft_strcat(next_thousand, "000");
	return (get_thousands(next_thousand, group_n - 1));
}

char	*add_zero(char digit)
{
	char	*nb;

	nb = malloc(sizeof(char) * 3);
	if (nb == NULL)
		return (NULL);
	nb[0] = digit;
	nb[1] = '0';
	nb[2] = '\0';
	return (nb);
}
