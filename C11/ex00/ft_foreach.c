/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:34:38 by qthierry          #+#    #+#             */
/*   Updated: 2022/09/01 01:28:19 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (!tab)
		return ;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void aff(int a)
// {
// 	printf("%d ", a);
// }

// int main ()
// {
// 	int tab[5] = {0, 1, 2, 3, 4};
// 	ft_foreach(tab, 5, &aff);

// }