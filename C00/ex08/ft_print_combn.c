/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:32:48 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/11 19:04:08 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int tab[], int index, int size, int first)
{
	int		value;
	int		i;

	if (index < size)
	{
		value = first;
		while (value <= 9)
		{
			tab[index] = value;
			print_comb(tab, index + 1, size, value + 1);
			value++;
		}
	}
	else
	{
		i = 0;
		while (i < size)
		{
			ft_putchar(tab[i] + '0');
			i++;
		}
		if (tab[0] < 10 - size)
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int		tab[10];

	print_comb(tab, 0, n, 0);
}
