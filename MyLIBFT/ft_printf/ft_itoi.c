/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:44:39 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 10:44:50 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_count_unb(unsigned long int nb)
{
	int				count;
	unsigned int	c;

	c = nb;
	count = 0;
	while (c >= 10)
	{
		c = c / 10;
		count++;
	}
	if (c < 10)
		count++;
	return (count);
}

void	ft_putnum_un(char *s, unsigned int n, int l)
{
	unsigned int c;

	c = n;
	s[l--] = '\0';
	if (n == 0)
		s[0] = '0';
	while (c > 10 || (c <= 10 && c != 0))
	{
		s[l--] = c % 10 + 48;
		c = c / 10;
	}
}

char	*ft_itoi(unsigned long int n)
{
	char	*new;
	int		l;

	l = ft_count_unb(n);
	new = (char*)malloc(sizeof(char) * l + 1);
	if (new == 0)
		return (NULL);
	ft_putnum_un(new, n, l);
	return (new);
}
