/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 15:13:25 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/20 18:47:46 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha_one(unsigned char str)
{
	if (str < 65 || str > 122)
		return (0);
	if (str > 90 && str < 97)
		return (0);
	return (1);
}

int	ft_str_is_numeric_one(unsigned char str)
{
	if (str < 48 || str > 57)
		return (0);
	return (1);
}

int	ft_str_is_lowercase_one(unsigned char str)
{
	if (str < 97 || str > 122)
		return (0);
	return (1);
}

int	ft_str_is_uppercase_one(unsigned char str)
{
	if (str < 65 || str > 90)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	next_is_cap;

	next_is_cap = 1;
	index = 0;
	while (str[index])
	{
		if (ft_str_is_uppercase_one(str[index]))
			str[index] += 32;
		if (next_is_cap && ft_str_is_lowercase_one(str[index]))
		{
			str[index] -= 32;
			next_is_cap = 0;
		}
		if (!ft_str_is_alpha_one(str[index]))
			next_is_cap = 1;
		if (ft_str_is_numeric_one(str[index]))
			next_is_cap = 0;
		index++;
	}
	return (str);
}
