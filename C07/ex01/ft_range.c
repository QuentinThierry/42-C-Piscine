/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:43:26 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/27 14:14:06 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned long int	range;
	unsigned long int	i;
	int					*res;

	if (min >= max)
		return (NULL);
	range = ((unsigned long int)max - (unsigned long int)min);
	res = malloc(sizeof(int) * range);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < range)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
