/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:53:03 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/13 14:53:04 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lowercase;

	is_lowercase = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 96 || str[i] > 122)
			is_lowercase = 0;
		i++;
	}
	return (is_lowercase);
}
