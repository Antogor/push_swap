/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 12:29:59 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/13 18:06:32 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cont;

	cont = (char *)malloc(count * size);
	if (cont == 0)
		return (NULL);
	ft_bzero(cont, (count * size));
	return (cont);
}
