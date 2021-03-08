/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:39:00 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 12:14:59 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_comp(char *hexanum, t_printf *tab, size_t l)
{
	if (tab->punt == '.' && (tab->flags == '-' || tab->flags == '0' ||
		tab->flags == 1))
		ft_put_precision(hexanum, 0, l, tab);
	else
	{
		if (tab->flags == '0' && tab->width > (int)l)
			ft_putzeros(ft_total(l, tab->width), tab);
		else if (tab->flags == 1 && tab->width > (int)l)
			ft_put_spaces(ft_total(l, tab->width), tab);
		else if (tab->punt == '.' && tab->precision > (int)l)
			ft_putzeros(ft_total(l, tab->precision), tab);
		ft_putstr_fd(hexanum, 1);
		if (tab->flags == '-' && tab->width > (int)l)
			ft_put_spaces(ft_total(l, tab->width), tab);
	}
}

void	put_lower(char *s, size_t l)
{
	while ((int)l >= 0)
	{
		if (s[l] >= 65 && s[l] <= 90)
			s[l] = ft_tolower(s[l]);
		l--;
	}
}

void	display_hexa(int h, t_printf *tab)
{
	char	*hexanum;
	size_t	l;

	if (h >= 0)
	{
		hexanum = ft_convert_hexa(h);
		l = ft_strlen(hexanum);
		tab->br += l;
		if (tab->type == 'x')
			put_lower(hexanum, l);
		ft_comp(hexanum, tab, l);
	}
	else
	{
		hexanum = ft_convert_hexa_neg(h);
		l = ft_strlen(hexanum);
		tab->br += l;
		if (tab->type == 'x')
			put_lower(hexanum, l);
		ft_comp(hexanum, tab, l);
	}
	free(hexanum);
	hexanum = NULL;
}
