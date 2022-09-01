/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:31:34 by qthierry          #+#    #+#             */
/*   Updated: 2022/09/01 01:25:05 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (tab[i] != NULL)
	{
		j = i;
		while (tab[j] != NULL)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

// int main()
// {
// 	char **tab;

// 	tab = malloc(sizeof(char *) * 6);

// 	tab[0] = "test1";
// 	tab[1] = "test2";
// 	tab[2] = "test4";
// 	tab[3] = "test5";
// 	tab[4] = "test4";
// 	tab[5] = NULL;

// 	ft_sort_string_tab(tab);

// 	while (*tab != NULL)
// 	{
// 		printf("%s ", *tab);
// 		tab++;
// 	}
// }