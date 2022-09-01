/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:52:44 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/13 14:52:45 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	is_numeric = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			is_numeric = 0;
		i++;
	}
	return (is_numeric);
}
