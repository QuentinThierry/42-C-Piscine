/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:59:32 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/30 01:18:15 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned long int	nbr_range;
	unsigned long int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nbr_range = max - min;
	*range = malloc(sizeof(int) * nbr_range);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < nbr_range)
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (nbr_range);
}

// int main()
// {
// 	int **test;
// 	int aaa;

// 	test = malloc(sizeof(int *));
// 	aaa = ft_ultimate_range(test, -10, 10);
// 	printf("%d\n", aaa);
// 	for (int i = 0; i < 20; i++)
// 	{
// 		printf("%d\n", (*test)[i]);
// 	}
// }