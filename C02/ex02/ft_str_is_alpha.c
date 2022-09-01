/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 14:52:33 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/13 14:52:35 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	is_alpha = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || str[i] > 122)
			is_alpha = 0;
		if (str[i] > 90 && str[i] < 97)
			is_alpha = 0;
		i++;
	}
	return (is_alpha);
}
