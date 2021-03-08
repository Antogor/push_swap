/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 11:02:10 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 17:58:02 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

void	to_printf(const char *s, t_printf *tab)
{
	int err;

	while (s[tab->len] != '\0')
	{
		if (s[tab->len] != '%')
		{
			write(1, &s[tab->len], 1);
			tab->br++;
		}
		else
		{
			tab->len++;
			while (s[tab->len] == ' ')
				tab->len++;
			if (s[tab->len] == '\0')
				break ;
			else
				err = check_flags(s, tab);
			if (err == -1)
				break ;
		}
		tab->len++;
	}
}

int		ft_printf(const char *s, ...)
{
	int			br;
	t_printf	*tab;

	if (!(tab = (t_printf*)malloc(sizeof(t_printf))))
		return (-1);
	va_start(tab->args, s);
	tab->len = 0;
	tab->br = 0;
	br = 0;
	to_printf(s, tab);
	br += tab->br;
	va_end(tab->args);
	free(tab);
	tab = NULL;
	return (br);
}
