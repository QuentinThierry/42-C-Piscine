/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:09:36 by qthierry          #+#    #+#             */
/*   Updated: 2022/09/01 17:24:39 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	addition(int a, int b);
int	soustract(int a, int b);
int	mult(int a, int b);
int	divise(int a, int b);
int	mod(int a, int b);

int	ft_atoi(char *str)
{
	int	n;
	int	is_neg;

	is_neg = 1;
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	while (*str > '9' || *str < '0')
	{
		if (*str == '-')
			is_neg *= -1;
		else if (*str != '+')
			return (0);
		str++;
	}
	n = 0;
	while (*str <= '9' && *str >= '0')
		n = *(str++) - '0' + n * 10;
	return (n * is_neg);
}

int	calculate(int first, char *operator, int second)
{
	int		(*functions[5])(int, int);
	char	*(op[5]);
	int		i;

	functions[0] = &addition;
	functions[1] = &soustract;
	functions[2] = &mult;
	functions[3] = &divise;
	functions[4] = &mod;
	op[0] = "+\0";
	op[1] = "-\0";
	op[2] = "*\0";
	op[3] = "/\0";
	op[4] = "%\0";
	i = 0;
	while (i < 5)
	{
		if (op[i][0] == *operator)
			return (functions[i](first, second));
		i++;
	}
	return (0);
}

int	parse_args(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argv[2][0] == 0)
		return (-1);
	if (argv[2][1] != 0)
		return (-1);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero\n", 25);
		return (0);
	}
	return (1);
}

void	ft_putnbr(int n)
{
	long	nbr;
	char	c;

	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	main(int argc, char **argv)
{
	int	error;

	error = parse_args(argc, argv);
	if (error == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (!error)
		return (0);
	ft_putnbr(calculate(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3])));
	write(1, "\n", 1);
	return (0);
}
