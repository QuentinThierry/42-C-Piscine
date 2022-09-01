/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:00:09 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/29 17:56:45 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "ft_stock_str.h"

// typedef struct s_stock_str
// {
// 	int size;
// 	char *str;
// 	char *copy;
// } t_stock_str;

int	ft_strlen(char *str)
{
	char	*deb;

	deb = str;
	while (*str)
		str++;
	return (str - deb);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*res;

	size = 0;
	i = 0;
	while (src[i++])
		size++;
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < size)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*res;

	res = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strdup(av[i]);
		if (!res[i].copy)
			return (NULL);
		i++;
	}
	res[i].str = NULL;
	return (res);
}

// int main (int argc, char**argv)
// {
// 	t_stock_str *res = ft_strs_to_tab(argc, argv);
// 	int i;

// 	i = 0;
// 	while (res[i].str != NULL)
// 	{
// 		printf("%s\n", res[i].str);
// 		i++;
// 	}
// 	return (0);
// }
