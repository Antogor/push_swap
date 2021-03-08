/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:04:48 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 12:14:37 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		count_hexa(int nb)
{
	unsigned long int	n;
	int					len;

	n = nb;
	len = 0;
	if (nb == 0)
		len++;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

char	*ft_convert_hexa(int nb)
{
	int		tmp;
	int		l;
	char	*hexanum;

	l = count_hexa(nb);
	hexanum = malloc(sizeof(char) * l);
	hexanum[l--] = '\0';
	if (nb == 0)
		hexanum[l--] = 48;
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp < 10)
			hexanum[l--] = (char)(48 + tmp);
		else if (tmp >= 10)
			hexanum[l--] = (char)(55 + tmp);
		nb = nb / 16;
	}
	return (hexanum);
}
