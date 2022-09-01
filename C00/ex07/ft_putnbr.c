/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:20:15 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/11 19:11:56 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	get_int_size(long int value)
{
	int		cmpt;

	cmpt = 0;
	while (value != 0)
	{
		cmpt++;
		value /= 10;
	}
	return (cmpt);
}

long int	check_negative(long int value)
{
	if (value < 0)
	{
		write(1, "-", 1);
		return (-value);
	}
	return (value);
}

void	ft_putnbr(int nb)
{
	char		*res;
	int			input_size;
	int			input_size_cpy;
	long int	input_cpy;

	input_cpy = nb;
	if (input_cpy == 0)
	{
		write(1, "0", 1);
		return ;
	}
	input_cpy = check_negative(input_cpy);
	input_size = get_int_size(input_cpy);
	input_size_cpy = input_size;
	res = malloc(sizeof(char) * input_size);
	while (input_size_cpy-- > 0)
	{
		res[input_size_cpy] = '0' + (input_cpy % 10);
		input_cpy /= 10;
	}
	write(1, res, input_size);
}
