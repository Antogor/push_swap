/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:41:57 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 10:54:15 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	ft_asig(t_printf *tab)
{
	if (tab->type == 'd' || tab->type == 'i')
		tab->d = va_arg(tab->args, int);
	else if (tab->type == 'c')
		tab->c = va_arg(tab->args, int);
	else if (tab->type == 's')
		tab->s = va_arg(tab->args, char *);
	else if (tab->type == 'u')
		tab->u = va_arg(tab->args, unsigned int);
	else if (tab->type == 'x' || tab->type == 'X')
		tab->hexa = va_arg(tab->args, int);
	else if (tab->type == 'p')
		tab->p = va_arg(tab->args, long int);
}

void	ft_conversion(t_printf *tab)
{
	ft_asig(tab);
	if (tab->type == 'd' || tab->type == 'i')
		tab->d == 0 && tab->precision == 0 && tab->punt == '.' ?
		display_0(tab) : display_d(tab->d, tab);
	else if (tab->type == 'c')
		display_c(tab->c, tab);
	else if (tab->type == 's')
		display_s(tab->s, tab);
	else if (tab->type == 'u')
		tab->u == 0 && tab->precision == 0 && tab->punt == '.' ?
		display_0(tab) : display_u(tab->u, tab);
	else if (tab->type == 'x' || tab->type == 'X')
		tab->hexa == 0 && tab->precision == 0 && tab->punt == '.' ?
		display_0(tab) : display_hexa(tab->hexa, tab);
	else if (tab->type == 'p')
		display_p(tab->p, tab);
}
