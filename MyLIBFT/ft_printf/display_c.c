/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:04:08 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 15:34:13 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_spaces_c(int total, t_printf *tab)
{
	while (total > 0)
	{
		ft_putchar_fd(' ', 1);
		tab->br++;
		total--;
	}
}

void	display_c(int c, t_printf *tab)
{
	if (tab->flags == 1)
	{
		ft_spaces_c(ft_total(1, tab->width), tab);
		ft_putchar_fd(c, 1);
		tab->br++;
	}
	else if (tab->flags == '-')
	{
		ft_putchar_fd(c, 1);
		tab->br++;
		ft_spaces_c(ft_total(1, tab->width), tab);
	}
	else if (c == '%' && tab->flags == '0')
	{
		ft_putzeros(ft_total(1, tab->width), tab);
		ft_putchar_fd(c, 1);
		tab->br++;
	}
	else
	{
		ft_putchar_fd(c, 1);
		tab->br++;
	}
}
