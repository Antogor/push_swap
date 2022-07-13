/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bi_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 11:58:02 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/13 18:12:04 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_bi_array(int nrows, int ncolumns)
{
	int		i;
	char	**array;

	i = 0;
	array = malloc(nrows * sizeof(char *));
	if (!array)
		return (NULL);
	while (i < nrows)
	{
		array[i] = malloc(ncolumns * sizeof(char));
		if (!array[i])
			return (NULL);
		i++;
	}
	return (array);
}
