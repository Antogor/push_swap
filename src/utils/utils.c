/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:51 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/23 18:46:54 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	*ft_copy_array(int *src, int len)
{
	int	i;
	int	*dst;

	dst = ft_allocate_malloc(len);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

int	*ft_allocate_malloc(int len)
{
	int	*result;

	result = ft_calloc(len, sizeof(int));
	if (!result)
		ft_error(NULL);
	return (result);
}

int	ft_vector_len(char **arg)
{
	char	**aux;
	int		len;

	aux = arg;
	len = 0;
	while(*aux)
	{
		aux++;
		len++;
	}
	return (len);
}
