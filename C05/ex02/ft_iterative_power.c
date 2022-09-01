/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:21:50 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/25 15:18:28 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		res *= nb;
	return (res);
}

// int main ()
// {
// 	printf("%d", ft_iterative_power(152, 0));
// }