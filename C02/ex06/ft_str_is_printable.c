/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:53:23 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/13 14:53:23 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	is_printable = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			is_printable = 0;
		i++;
	}
	return (is_printable);
}
