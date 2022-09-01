/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:42:11 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/23 16:16:08 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	n;
	int	is_neg;

	n = 0;
	is_neg = 1;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	while (*str < '0' || *str > '9')
	{
		if (*str == '-')
			is_neg *= -1;
		else if (*str != '+')
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
		n = *str++ - '0' + n * 10;
	return (n * is_neg);
}
