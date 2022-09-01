/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:53:13 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/13 14:53:14 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uppercase;

	is_uppercase = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 90)
			is_uppercase = 0;
		i++;
	}
	return (is_uppercase);
}
