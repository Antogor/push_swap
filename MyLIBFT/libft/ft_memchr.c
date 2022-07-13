/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:47:45 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/13 18:13:13 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*l;

	l = (unsigned char *)s;
	while (n > 0)
	{
		if (*l == (unsigned char)c)
			return (l);
		l++;
		n--;
	}
	return (NULL);
}
