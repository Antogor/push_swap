/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:39:46 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 15:35:48 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_memory_zero(char *memory, size_t l, t_printf *tab)
{
	char	*substr;

	substr = ft_substr(memory, 2, l);
	if (tab->flags == 1 && tab->width > tab->precision)
		ft_put_precision(memory, 0, l, tab);
	else
	{
		ft_putstr_fd("0x", 1);
		ft_put_precision(substr, 0, l - 2, tab);
	}
	free(substr);
	substr = NULL;
}

void	ft_memory_normal(char *memory, size_t l, t_printf *tab)
{
	if (tab->p == 0 && tab->precision == 0 && tab->punt == '.')
	{
		tab->br--;
		if (tab->flags == 1 && tab->width > (int)l)
			ft_put_spaces(ft_total(l - 1, tab->width), tab);
		ft_putstr_fd("0x", 1);
	}
	else
	{
		if (tab->flags == 1 && tab->width > (int)l)
			ft_put_spaces(ft_total(l, tab->width), tab);
		ft_putstr_fd(memory, 1);
		if (tab->flags == '-' && tab->width > (int)l)
			ft_put_spaces(ft_total(l, tab->width), tab);
	}
}

void	display_p(long int p, t_printf *tab)
{
	char	*memory;
	size_t	l;

	memory = ft_convert_memory(p);
	l = ft_strlen(memory);
	tab->br += l;
	tab->precision > 0 ? ft_memory_zero(memory, l, tab) :
						ft_memory_normal(memory, l, tab);
	free(memory);
	memory = NULL;
}
