/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rleseur <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:11:33 by rleseur           #+#    #+#             */
/*   Updated: 2021/10/23 11:12:41 by rleseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	len_src = 0;
	while (src[len_src])
		len_src++;
	if (len_dest >= size)
		return (size + len_src);
	i = 0;
	while (src[i] && (len_dest + i) < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
