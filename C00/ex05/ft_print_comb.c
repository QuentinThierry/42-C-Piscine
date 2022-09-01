/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:36:36 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/13 20:05:00 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = 47;
	while (first++ < '9')
	{
		second = 47;
		while (second++ < '9')
		{
			third = 47;
			while (third++ < '9')
			{
				if (first < second && second < third)
				{
					write(1, &first, 1);
					write(1, &second, 1);
					write(1, &third, 1);
					if (first != '7')
						write(1, ", ", 2);
				}
			}
		}
	}
}
