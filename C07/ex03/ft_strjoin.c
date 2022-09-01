/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:52:20 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/30 15:41:07 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	i;

	index = 0;
	while (dest[index])
		index++;
	i = 0;
	while (src[i])
	{
		dest[index] = src[i];
		i++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*error(void)
{
	char	*res;

	res = malloc(sizeof(char));
	*res = 0;
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		tot_length;

	i = 0;
	tot_length = 0;
	if (size == 0)
		return (error());
	while (i < size)
		tot_length += ft_strlen(strs[i++]);
	tot_length += (size) * ft_strlen(sep) + 1;
	res = (char *)malloc(sizeof(char) * tot_length);
	if (!res)
		return (NULL);
	*res = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		i++;
		if (i < size)
			ft_strcat(res, sep);
	}
	res[tot_length - 1] = 0;
	return (res);
}

// #include <stdio.h>

// int main()
// {
// 	int size = 0;
// 	int i;
// 	char **strs;
// 	char *sep;

// 	strs = malloc(sizeof(char *) * (size + 1));
// 	i = 0;

// 	// sep = (char *)malloc(sizeof(char) * 10);
// 	sep = "*";
// 	// strs[0] = "m";
// 	// strs[1] = "b";
// 	// strs[2] = "c";
// 	// strs[3] = "x";

// 	char *res = ft_strjoin(size, strs, sep);

// 	printf("%s", res);

// 	// free(sep);
// 	i = 0;
// 	while (i < size)
// 	{
// 		free(strs[i]);
// 		i++;
// 	}
// 	free(strs);
// 	// free(res);
// }