/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:15:41 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/15 14:55:17 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_strings(int n1, int n2)
{
	char	temp;

	temp = n1 / 10 + '0';
	write(1, &temp, 1);
	temp = n1 % 10 + '0';
	write(1, &temp, 1);
	write(1, " ", 1);
	temp = n2 / 10 + '0';
	write(1, &temp, 1);
	temp = n2 % 10 + '0';
	write(1, &temp, 1);
	if (n1 != 98 || n2 != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 < 100)
	{
		while (n2 < 100)
		{
			if (n1 < n2)
			{
				print_strings(n1, n2);
			}
			n2++;
		}
		n2 = 0;
		n1++;
	}
}
