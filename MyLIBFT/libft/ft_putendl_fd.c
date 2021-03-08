/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 17:15:58 by agarzon-          #+#    #+#             */
/*   Updated: 2019/11/29 11:35:06 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		l;

	l = 0;
	if (*s != '\0')
	{
		while (s[l] != '\0')
		{
			write(fd, &s[l], 1);
			l++;
		}
		write(fd, "\n", 1);
	}
}
