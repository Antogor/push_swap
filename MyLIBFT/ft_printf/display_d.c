/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:03:32 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 17:06:44 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	negative_chase(int d, char *s, t_printf *tab, size_t l)
{
	int lz;

	lz = 1;
	if (d < 0)
	{
		ft_putchar_fd(*s, 1);
		s++;
		lz += l;
	}
	else
		lz = l;
	if (tab->flags == '0')
		ft_putzeros(ft_total(lz, tab->width), tab);
	else if (tab->punt == '.')
	{
		lz -= d < 0 ? 1 : 0;
		ft_putzeros(ft_total(lz, tab->precision), tab);
	}
	ft_putstr_fd(s, 1);
}

void	chase_normal(int d, char *q, t_printf *tab, size_t l)
{
	if (tab->arg_neg == 1)
		tab->flags = '-';
	if (tab->flags == '0' && tab->width > (int)l)
	{
		l -= d < 0 ? 1 : 0;
		negative_chase(d, q, tab, l);
	}
	else if (tab->punt == '.' && tab->precision > (int)l)
	{
		l -= d < 0 ? 1 : 0;
		negative_chase(d, q, tab, l);
	}
	else if (tab->flags == 1 && tab->width > (int)l && tab->arg_neg != 1)
	{
		ft_put_spaces(ft_total(l, tab->width), tab);
		ft_putstr_fd(q, 1);
	}
	else
		ft_putstr_fd(q, 1);
	if ((tab->flags == '-' || (tab->flags == 1 && tab->arg_neg == 1))
		&& tab->width > (int)l)
		ft_put_spaces(ft_total(l, tab->width), tab);
}

void	display_d(int d, t_printf *tab)
{
	char	*q;
	size_t	l;

	q = ft_itoa(d);
	l = ft_strlen(q);
	tab->br += l;
	if (tab->punt == '.' && (tab->flags == '-' || tab->flags == '0' ||
		tab->flags == 1))
		ft_put_precision(q, d, l, tab);
	else
		chase_normal(d, q, tab, l);
	free(q);
	q = NULL;
}
