/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 19:11:01 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/15 17:42:15 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] && s2[index])
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if (s1[index] != s2[index])
		return (s1[index] - s2[index]);
	return (0);
}
