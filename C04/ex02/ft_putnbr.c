/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:45:51 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/22 15:04:33 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long int	check_neg(long int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		return (-nb);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	long int	nb_cpy;

	nb_cpy = check_neg((long int)nb);
	if (nb_cpy > 9)
	{
		ft_putnbr(nb_cpy / 10);
		nb_cpy %= 10;
	}
	ft_putchar(nb_cpy + '0');
}
