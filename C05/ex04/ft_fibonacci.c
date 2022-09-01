/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 20:00:15 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/25 15:18:23 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 2)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	else if (index >= 0)
		return (index);
	else
		return (-1);
}

// int main ()
// {
// 	printf("%d", ft_fibonacci(48));
// }