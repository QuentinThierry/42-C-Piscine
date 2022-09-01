/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:14:32 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/25 15:18:53 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	if (nb)
		res *= nb * ft_recursive_factorial(nb - 1);
	return (res);
}

// int main ()
// {
// 	printf("%d", ft_recursive_factorial(-10));
// }