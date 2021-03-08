/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:05:25 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 16:53:15 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_put_normal(char *s, char *zero, t_printf *tab)
{
	size_t	l;

	if (s == NULL)
		l = ft_strlen(zero);
	else
		l = ft_strlen(s);
	tab->br += l;
	if (tab->flags == '0' && tab->width > (int)l)
		ft_putzeros(ft_total(l, tab->width), tab);
	else if (tab->flags == 1 && tab->width > (int)l && tab->arg_neg != 1)
		ft_put_spaces(ft_total(l, tab->width), tab);
	s == NULL ? ft_putstr_fd(zero, 1) : ft_putstr_fd(s, 1);
	if ((tab->flags == '-' || (tab->flags == 1 && tab->arg_neg == 1))
		&& tab->width > (int)l)
		ft_put_spaces(ft_total(l, tab->width), tab);
}

void	ft_put_punt(char *s, char *zero, t_printf *tab)
{
	char	*str;
	size_t	l;

	if (s == NULL)
		str = ft_substr(zero, 0, tab->precision);
	else
		str = ft_substr(s, 0, tab->precision);
	l = ft_strlen(str);
	tab->br += l;
	if (tab->flags == '0' && tab->width > (int)l)
		ft_putzeros(ft_total(l, tab->width), tab);
	else if (tab->flags == 1 && tab->width > (int)l)
		ft_put_spaces(ft_total(l, tab->width), tab);
	ft_putstr_fd(str, 1);
	if (tab->flags == '-' && tab->width > (int)l)
		ft_put_spaces(ft_total(l, tab->width), tab);
	free(str);
	str = NULL;
}

void	display_s(char *s, t_printf *tab)
{
	char	*zero;

	zero = "(null)";
	if (tab->punt == '.')
		ft_put_punt(s, zero, tab);
	else
		ft_put_normal(s, zero, tab);
}
