/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qthierry <qthierry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:49:16 by qthierry          #+#    #+#             */
/*   Updated: 2022/08/20 13:50:59 by qthierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable_one(unsigned char str)
{
	if (str < 32 || str > 126)
		return (0);
	return (1);
}

void	ft_putchar(unsigned char t)
{
	write(1, &t, 1);
}

void	print_as_hex(unsigned char t)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[t / 16]);
	ft_putchar(base[t % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (ft_str_is_printable_one(str[index]))
			ft_putchar(str[index]);
		else
			print_as_hex(str[index]);
		index++;
	}
}

// int main ()
// {
// 	ft_putstr_non_printable("coucou a va ?");
// }