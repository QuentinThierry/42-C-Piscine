/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 13:44:35 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/17 13:07:35 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	*new_tab;

	new_tab = malloc(sizeof(int) * size);
	index = 0;
	while (index < size)
	{
		new_tab[index] = tab[size - index - 1];
		index++;
	}
	index = 0;
	while (index < size)
	{
		tab[index] = new_tab[index];
		index++;
	}
}
