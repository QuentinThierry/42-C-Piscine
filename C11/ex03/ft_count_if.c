/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:58:26 by qthierry          #+#    #+#             */
/*   Updated: 2022/09/01 11:33:01 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	cmpt;

	if (!tab)
		return (0);
	i = 0;
	cmpt = 0;
	while (i < length)
	{
		if (f(tab[i]))
			cmpt++;
		i++;
	}
	return (cmpt);
}
