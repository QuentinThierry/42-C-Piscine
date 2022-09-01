/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:34:26 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/24 19:47:42 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long int	ft_sqrt_mod(int nb)
{
	long int	i;

	i = 0;
	while (i * i < nb)
		i++;
	if (nb == 2)
		return (1);
	return (i);
}

int	ft_find_next_prime(int nb)
{
	int			i;
	int			is_prime;
	long int	sqrt_nbr;

	while (nb > 2)
	{
		i = 1;
		is_prime = 1;
		if (nb % 2 != 0 && nb >= 2)
		{
			sqrt_nbr = ft_sqrt_mod(nb);
			while (i < sqrt_nbr)
			{
				i += 1;
				if (nb % i == 0)
					is_prime = 0;
			}
			if (is_prime == 1)
				return (nb);
		}
		nb++;
	}
	return (2);
}

// int	main()
// {
// 	printf("%d", ft_find_next_prime(48));
// }