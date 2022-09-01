/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:41:54 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/15 19:15:04 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		index;
	int		i;
	char	*begin;

	index = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[index])
	{
		i = 0;
		if (str[index] == to_find[0])
		{
			begin = &str[index];
			while (to_find[i])
			{
				if (to_find[i] != str[index + i])
					break ;
				i++;
			}
			if (to_find[i] == 0)
				return (begin);
		}
		index++;
	}
	return (0);
}
