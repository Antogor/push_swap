/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hexa_neg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:42:37 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 11:16:33 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

long int	ft_longint(int nb)
{
	char		*tmp;
	long int	n;

	tmp = ft_itoi(nb);
	n = ft_atoa(tmp);
	free(tmp);
	tmp = NULL;
	return (n);
}

int			count_hexa_neg(long int nb)
{
	long int	n;
	int			len;

	n = nb;
	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

char		*ft_convert_hexa_neg(int nb)
{
	long int	n;
	long int	tmp;
	char		*hexanum;
	int			l;

	n = ft_longint(nb);
	l = count_hexa_neg(n);
	hexanum = malloc(sizeof(char) * l);
	hexanum[l--] = '\0';
	if (n == 0)
		hexanum[l--] = 48;
	while (n != 0)
	{
		tmp = n % 16;
		if (tmp < 10)
			hexanum[l--] = (char)(48 + tmp);
		else if (tmp >= 10)
			hexanum[l--] = (char)(55 + tmp);
		n = n / 16;
	}
	return (hexanum);
}
