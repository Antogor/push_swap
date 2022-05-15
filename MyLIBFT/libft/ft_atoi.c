/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:27:19 by agarzon-          #+#    #+#             */
/*   Updated: 2022/05/15 16:52:46 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long		ft_atoi(const char *nptr)
{
	int			l;
	long long  	numb;
	long long	negative;

	l = 0;
	numb = 0;
	negative = 1;
	while (nptr[l] != '\0')
	{
		if (nptr[l] == '\t' || nptr[l] == '\n' || nptr[l] == ' '
		|| nptr[l] == '\v' || nptr[l] == '\f' || nptr[l] == '\r')
			l++;
		else
			break ;
	}
	if (nptr[l] == '-')
		negative = -1;
	if (nptr[l] == '-' || nptr[l] == '+')
		l++;
	while (nptr[l] != '\0' && nptr[l] >= '0' && nptr[l] <= '9')
	{
		numb = (numb * 10 + (nptr[l] - '0'));
		l++;
	}
	return (numb * negative);
}
