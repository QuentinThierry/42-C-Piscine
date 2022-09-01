/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:10:07 by qthierry          #+#    #+#             */
/*   Updated: 2022/09/01 20:10:14 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_isspace(char c);
int	ft_strlen(char *str);
int	ft_check_base(char *base);
int	ft_is_in_base(char c, char *base);
int	ft_atoi_base(char *nbr, char *base);

void	ft_stradd(char *str, char c)
{
	int	i;

	if (str == NULL)
		return ;
	i = ft_strlen(str);
	*(str + i) = c;
	*(str + i + 1) = 0;
}

void	ft_tostr_base(int nbr, char *base, char *str)
{
	unsigned int	n;
	int				len;

	len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_stradd(str, '-');
		n = (unsigned int)(-1 * nbr);
		if (n / len)
			ft_tostr_base((int)(n / len), base, str);
		ft_tostr_base((int)(n % len), base, str);
	}
	else if (nbr < len)
		ft_stradd(str, *(base + nbr));
	else
	{
		ft_tostr_base(nbr / len, base, str);
		ft_tostr_base(nbr % len, base, str);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*ns;
	int		nb;

	if (ft_check_base(base_from) || ft_check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	ns = (char *)malloc(34);
	while (ns == NULL)
		ns = (char *)malloc(34);
	ft_tostr_base(nb, base_to, ns);
	return (ns);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}
*/
