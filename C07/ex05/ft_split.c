/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 12:12:59 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/29 15:23:08 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_in_set(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src, char *charset)
{
	int		i;
	int		size;
	char	*res;

	size = 0;
	i = 0;
	while (src[i++] && !is_in_set(charset, src[size]))
		size++;
	res = malloc(sizeof(char) * (size + 1));
	i = 0;
	while (i < size)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	nbr_words;
	int	wait_word;

	wait_word = 1;
	nbr_words = 0;
	i = 0;
	while (str[i])
	{
		if (is_in_set(charset, str[i]))
			wait_word = 1;
		else
		{
			if (wait_word)
			{
				nbr_words++;
			}
			wait_word = 0;
		}
		i++;
	}
	return (nbr_words);
}

char	**fill_res(char **res, int nbr_words, char *charset, char *str)
{
	int	i;
	int	size;

	i = 0;
	while (i < nbr_words)
	{
		size = 0;
		while (is_in_set(charset, *str))
			str++;
		while (str[size] && !is_in_set(charset, str[size]))
			size++;
		if (size)
			res[i] = ft_strdup(str, charset);
		str += size;
		i++;
	}
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		nbr_words;
	char	**res;

	if (!str[0])
	{
		res = malloc(sizeof(char *));
		if (!res)
			return (NULL);
		res[0] = NULL;
		return (res);
	}
	nbr_words = count_words(str, charset);
	res = malloc(sizeof(char *) * (nbr_words + 1));
	if (!nbr_words || !res)
	{
		res[0] = NULL;
		return (res);
	}
	res = fill_res(res, nbr_words, charset, str);
	res[nbr_words] = NULL;
	return (res);
}

// int main()
// {
// 	char **res;
// 	int i;
// 	char *charset = " ";
// 	char *str = "jefaisdestests";

// 	i = 0;
// 	res = ft_split(str, charset);

// 	while (res[i] != NULL)
// 	{
// 		printf("%s\n", res[i]);
// 		i++;	
// 	}
// }
