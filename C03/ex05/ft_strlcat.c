/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:14:38 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/22 14:37:59 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<bsd/string.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (size == 0 || size < len_dest)
		return (len_src + size);
	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j + i < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (len_src + len_dest);
}
