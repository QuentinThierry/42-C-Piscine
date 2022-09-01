/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:24:24 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/25 15:08:00 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_board(int *b)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(b[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	check_can_place(int *b, int x, int value)
{
	int	i;

	i = 0;
	while (i < x)
		if (b[i++] == value)
			return (0);
	i = 0;
	while (i < x)
	{
		if (b[i] == value + i - x)
			return (0);
		if (b[i] == value - i + x)
			return (0);
		i++;
	}
	return (1);
}

int	rec_queens(int *b, int res, int x)
{
	if (x == 10)
	{
		print_board(b);
		return (res + 1);
	}
	while (b[x] < 10)
	{
		if (check_can_place(b, x, b[x]))
			res = rec_queens(b, res, x + 1);
		b[x]++;
	}
	b[x] = 0;
	return (res);
}

int	ft_ten_queens_puzzle(void)
{
	int	res;
	int	b[10];

	res = 0;
	while (res < 10)
		b[res++] = 0;
	res = rec_queens(b, 0, 0);
	return (res);
}

// int main()
// {
// 	printf("%d",ft_ten_queens_puzzle());
// }