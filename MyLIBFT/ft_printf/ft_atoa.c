/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:41:13 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/08 10:41:24 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

long int	ft_atoa(const char *nptr)
{
	int			l;
	long int	numb;

	l = 0;
	numb = 0;
	while (nptr[l] != '\0')
	{
		if (nptr[l] == '\t' || nptr[l] == '\n' || nptr[l] == ' '
		|| nptr[l] == '\v' || nptr[l] == '\f' || nptr[l] == '\r')
			l++;
		else
			break ;
	}
	while (nptr[l] != '\0' && nptr[l] >= '0' && nptr[l] <= '9')
	{
		numb = (numb * 10 + (nptr[l] - '0'));
		l++;
	}
	return (numb);
}
