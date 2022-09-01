/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 19:08:03 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/25 17:31:49 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| (base[i] <= 13 && base[i] >= 9))
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	i;
	int	is_neg;
	int	base_size;

	base_size = check_base(base);
	if (base_size == 0)
		return (0);
	is_neg = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (is_in_base(*str, base) == -1)
	{
		if (*str == '-')
			is_neg *= -1;
		else if (*str != '+')
			return (0);
		str++;
	}
	i = 0;
	n = 0;
	while (is_in_base(str[i], base) != -1)
		n = base_size * n + is_in_base(str[i++], base);
	return (n * is_neg);
}

// int main ()
// {
// 	printf("%d", ft_atoi_base("-01", "01"));
// }