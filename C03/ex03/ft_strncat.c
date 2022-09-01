/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:34:02 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/15 17:39:45 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				index;
	unsigned int	i;

	index = 0;
	while (dest[index])
		index++;
	i = 0;
	while (src[i] && i < nb)
	{
		dest[index] = src[i];
		i++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
