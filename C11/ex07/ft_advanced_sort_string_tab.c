/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:03:40 by qthierry          #+#    #+#             */
/*   Updated: 2022/09/01 01:24:37 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// int	ft_strlen(char *str)
// {
// 	char	*deb;

// 	deb = str;
// 	while (*str)
// 		str++;
// 	return (str - deb);
// }

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;

// 	i = 0;
// 	while (s1[i] && s2[i])
// 	{
// 		if (s1[i] != s2[i])
// 			return (s2[i] - s1[i]);
// 		i++;
// 	}
// 	if (s1[i] != s2[i])
// 		return (s2[i] - s1[i]);
// 	return (0);
// }

// int ft_strlencmp(char *s1, char *s2)
// {
// 	if (ft_strlen(s1) > ft_strlen(s2))
// 		return (1);
// 	return (0);
// }

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i], tab[j]) > 0)
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

// int main(int argc, char **argv)
// {
// 	argv[argc - 1] = NULL;
// 	ft_advanced_sort_string_tab(argv, &ft_strlencmp);

// 	(void)argc;

// 	while (*argv != NULL)
// 	{
// 		printf("%s ", *argv);
// 		argv++;
// 	}
// }