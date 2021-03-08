/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:49:52 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 16:13:26 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_type(const char *s, t_printf *tab)
{
	if (s[tab->len] == 'd' || s[tab->len] == 'i')
		return (s[tab->len]);
	else if (s[tab->len] == 'c')
		return (s[tab->len]);
	else if (s[tab->len] == '-' && s[tab->len + 1] == 's')
	{
		tab->len++;
		return (s[tab->len]);
	}
	else if (s[tab->len] == 'u')
		return (s[tab->len]);
	else if (s[tab->len] == 'X' || s[tab->len] == 'x')
		return (s[tab->len]);
	else if (s[tab->len] == '%')
		display_c('%', tab);
	else if (s[tab->len == 'p'])
		return (s[tab->len]);
	return (-1);
}
