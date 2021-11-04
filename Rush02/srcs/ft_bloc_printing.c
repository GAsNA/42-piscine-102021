/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bloc_printing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agras <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 20:49:41 by agras             #+#    #+#             */
/*   Updated: 2021/10/31 23:38:38 by agras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/functions.h"

char	*handle_hundreds(char *dic, char *str)
{
	char	*nb;

	nb = extract_str(str, str);
	if (!(nb))
		return (NULL);
	if (display_digits(find_nb(dic, nb)) == -1)
	{
		free(nb);
		return (NULL);
	}
	if (display_digits(find_nb(dic, "100")) == -1)
	{
		free(nb);
		return (NULL);
	}
	free(nb);
	return ("OK");
}

char	*handle_tens(char *dic, char *str)
{
	char	*nb;

	if (str[1] == '1')
	{
		nb = extract_str(str, &str[1]);
		if (!(nb))
			return (NULL);
	}
	else
	{
		nb = add_zero(*str);
		if (!(nb))
			return (NULL);
	}
	if (display_digits(find_nb(dic, nb)) == -1)
	{
		free(nb);
		return (NULL);
	}
	free(nb);
	return ("OK");
}

char	*handle_units(char *dic, char *str)
{
	char	*nb;

	nb = extract_str(str, str);
	if (!(nb))
		return (NULL);
	if (display_digits(find_nb(dic, nb)) == -1)
	{
		free(nb);
		return (NULL);
	}
	free(nb);
	return ("OK");
}

char	*handle_thousands(char	*dic, int group_n)
{
	char	*thousands;

	thousands = get_thousands("1", group_n - 1);
	if (!(thousands))
		return (NULL);
	if (ft_strlen(thousands) > 3)
	{
		if (display_digits(find_nb(dic, thousands)) == -1)
		{
			free(thousands);
			return (NULL);
		}
		free(thousands);
	}
	return ("OK");
}

char	*translate_nb(char *str, char *dic, int group_n)
{
	if (group_n == 0)
		return ("OK");
	if (str[0] != '0')
		if (handle_hundreds(dic, &str[0]) == NULL)
			return (NULL);
	if (str[1] != '0')
		if (handle_tens(dic, &str[1]) == NULL)
			return (NULL);
	if (str[1] != '1' && str[2] != '0')
		if (handle_units(dic, &str[2]) == NULL)
			return (NULL);
	if (group_n > 0)
		if (handle_thousands(dic, group_n) == NULL)
			return (NULL);
	translate_nb(&str[3], dic, group_n - 1);
	return ("OK");
}
