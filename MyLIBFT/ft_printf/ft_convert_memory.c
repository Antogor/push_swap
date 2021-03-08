/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_memory.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:43:24 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 12:19:02 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		count_memory(long int nb)
{
	long int	n;
	int			len;

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

char	*ft_convert_memory(long int nb)
{
	long int	tmp;
	char		*memory;
	int			l;

	l = count_memory(nb) + 2;
	memory = malloc(sizeof(char) * l);
	memory[0] = '0';
	memory[1] = 'x';
	memory[l--] = '\0';
	if (nb == 0)
		memory[l--] = 48;
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp < 10)
			memory[l--] = (char)(48 + tmp);
		else if (tmp >= 10)
			memory[l--] = (char)(87 + tmp);
		nb = nb / 16;
	}
	return (memory);
}
