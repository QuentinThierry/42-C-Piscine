/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:12:44 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/15 16:19:47 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (s1[index] && s2[index] && index < n)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	if (s1[index] != s2[index] && index < n)
		return (s1[index] - s2[index]);
	return (0);
}
