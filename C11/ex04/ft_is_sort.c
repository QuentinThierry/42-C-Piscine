/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 22:01:25 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/31 16:05:14 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_sort_a;
	int	is_sort_d;

	i = 1;
	is_sort_a = 1;
	is_sort_d = 1;
	if (length == 1)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			is_sort_a = 0;
		i++;
	}
	i = 1;
	while (i < length)
	{
		if (f(tab[i], tab[i - 1]) > 0)
			is_sort_d = 0;
		i++;
	}
	return (is_sort_a || is_sort_d);
}

// int cmp(int a, int b)
// {
// 	if (a < b)
// 		return (-1);
// 	else if (a > b)
// 		return (1);
// 	else
// 		return (0);
// }
/*
#include <stdio.h>

int main ()
{
	int tab[10] = {3, 3, 3, 3};
	// int tab[1] = {0};
	printf("%d", ft_is_sort(tab, 4, &cmp));

}*/
