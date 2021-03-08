/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:02:55 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 17:10:22 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		check_flags(const char *s, t_printf *tab)
{
	tab->flags = 0;
	tab->punt = 0;
	tab->precision = 0;
	tab->width = 0;
	tab->type = 0;
	tab->flags = ft_flags(s, tab);
	tab->width = ft_width(s, tab, tab->flags);
	tab->punt = ft_punt(s, tab);
	tab->precision = ft_precision(s, tab);
	tab->type = ft_type(s, tab);
	if (tab->type == 0)
		return (-1);
	else
		ft_conversion(tab);
	return (0);
}
