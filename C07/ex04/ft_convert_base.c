/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:11:00 by qthierry          #+#    #+#             */
/*   Updated: 2022/09/01 20:18:32 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(char c)
{
	if (c == 32 || (c > 8 && c < 14))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (*(str + i))
		i ++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (base == NULL)
		return (1);
	i = 0;
	while (*(base + i))
	{
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + j) == *(base + i))
				return (1);
			j ++;
		}
		if (*(base + i) < 33 || *(base + i) == 43 || *(base + i) == 45)
			return (1);
		if (*(base + i) > 126)
			return (1);
		i ++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	if (base == NULL)
		return (0);
	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == c)
			return (i + 1);
		i ++;
	}
	return (0);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	i;
	int	minus;
	int	nb;

	if (ft_check_base(base) || nbr == NULL)
		return (0);
	i = 0;
	minus = 1;
	nb = 0;
	while (ft_isspace(*(nbr + i)))
		i ++;
	while (*(nbr + i) == 43 || *(nbr + i) == 45)
	{
		if (*(nbr + i) == 45)
			minus *= -1;
		i ++;
	}
	while (ft_is_in_base(*(nbr + i), base))
	{
		nb = nb * ft_strlen(base) + (ft_is_in_base(*(nbr + i), base) - 1);
		i ++;
	}
	return (minus * nb);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Invalid number of arguments\n");
		return (1);
	}
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
*/
