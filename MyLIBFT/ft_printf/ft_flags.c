/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:44:04 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 11:49:40 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

int		ft_flags(const char *s, t_printf *tab)
{
	if (s[tab->len] == '-')
	{
		tab->len++;
		if (s[tab->len] == '0')
			tab->len++;
		return ('-');
	}
	else if (s[tab->len] == '0')
	{
		tab->len++;
		if (s[tab->len] == '-')
		{
			tab->len++;
			return ('-');
		}
		return ('0');
	}
	else if ((s[tab->len] >= '1' && s[tab->len] <= '9') || s[tab->len] == '*')
		return (1);
	return (0);
}
