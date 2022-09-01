/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:46:51 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/25 15:18:33 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	res = 1;
	if (power)
		res *= ft_recursive_power(nb, power - 1) * nb;
	return (res);
}

// int main ()
// {
// 	printf("%d", ft_recursive_power(1, -15));
// }