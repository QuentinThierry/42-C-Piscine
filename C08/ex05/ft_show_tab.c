/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:55:42 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/30 16:25:05 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	char	*deb;

	deb = str;
	while (*str)
		str++;
	return (str - deb);
}

long int	check_neg(long int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		return (-nb);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	long int	nb_cpy;
	int			c;

	nb_cpy = check_neg((long int)nb);
	if (nb_cpy > 9)
	{
		ft_putnbr(nb_cpy / 10);
		nb_cpy %= 10;
	}
	c = nb_cpy + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (!par)
		return ;
	while (par->str)
	{
		write(1, par->str, ft_strlen(par->str));
		write(1, "\n", 1);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		write(1, par->copy, ft_strlen(par->copy));
		write(1, "\n", 1);
		par++;
	}
}

// int main (int argc, char **argv)
// {
// 	t_stock_str *res = ft_strs_to_tab(argc, argv);

// 	ft_show_tab(res);
// }
