/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:51 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/09 18:18:44 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	*ft_copy_array(int *ori, int len)
{
	int	i;
	int	*dest;

	dest = ft_allocate_malloc(len);
	i = 0;
	while (i < len)
	{
		dest[i] = ori[i];
		i++;
	}
	return (dest);
}

int	*ft_allocate_malloc(int len)
{
	int	*result;

	result = (int *)malloc(sizeof(int) * len);
	if (!result)
		ft_error(NULL);
	return (result);
}
