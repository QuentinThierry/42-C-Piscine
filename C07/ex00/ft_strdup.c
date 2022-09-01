/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:37:03 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/29 18:36:45 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*res;

	size = 0;
	i = 0;
	while (src[i++])
		size++;
	res = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (i < size)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

// int main ()
// {
// 	printf("%s", ft_strdup("test"));
// }
