/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:25:51 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/25 17:31:31 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	rec_putnbr(long nbr, char *base)
{
	int			base_size;
	long int	n;

	if (!check_base(base))
		return ;
	base_size = ft_strlen(base);
	if (nbr < 0)
	{
		n = -nbr;
		ft_putchar('-');
		if (n / base_size > 0)
			rec_putnbr(n / base_size, base);
		rec_putnbr(n % base_size, base);
	}
	else if (nbr < base_size)
		ft_putchar(base[nbr]);
	else
	{
		rec_putnbr(nbr / base_size, base);
		rec_putnbr(nbr % base_size, base);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	rec_putnbr(nbr, base);
}

// int main(void)
// {
// 	int nbr = 1524510;
// 	char base[] = "0123456789abcdef";
// 	ft_putnbr_base(nbr, base);
// }
