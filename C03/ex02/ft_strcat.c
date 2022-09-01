/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:25:36 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/15 17:34:49 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	i;

	index = 0;
	while (dest[index])
		index++;
	i = 0;
	while (src[i])
	{
		dest[index] = src[i];
		i++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
