/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_total.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:49:22 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 16:31:05 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_total(size_t l, int tam)
{
	int total;

	if ((int)l < tam)
		total = tam - l;
	else
		total = l - tam;
	return (total);
}
