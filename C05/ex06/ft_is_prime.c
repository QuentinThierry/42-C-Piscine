/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:06:38 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/24 19:44:34 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long int	ft_sqrt_mod(int nb)
{
	long int	i;

	i = 0;
	if (nb == 2)
		return (1);
	while (i * i < nb)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int			i;
	long int	sqrt_nbr;

	i = 1;
	if (nb <= 1 || (nb % 2 == 0 && nb > 2))
		return (0);
	sqrt_nbr = ft_sqrt_mod(nb);
	while (i < sqrt_nbr)
	{
		i += 1;
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

// int main()
// {
// 	printf("%d", ft_is_prime(4));
// }