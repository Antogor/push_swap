/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 10:50:30 by agarzon-          #+#    #+#             */
/*   Updated: 2020/01/13 17:07:06 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft_printf.h"

size_t	ft_strlen_print_f(const char *s, int l)
{
	size_t q;

	q = 0;
	while (s[l] >= '0' && s[l] <= '9')
	{
		q++;
		l++;
	}
	return (q);
}

void	ft_axterix(t_printf *tab)
{
	tab->width = va_arg(tab->args, int);
	if (tab->width < 0)
	{
		tab->width *= -1;
		tab->arg_neg = 1;
	}
	tab->len++;
}

int		ft_width(const char *s, t_printf *tab, int flags)
{
	char	*substr;
	size_t	q;

	tab->arg_neg = 0;
	if (flags == '-' || flags == '0' || flags == 1)
	{
		if (s[tab->len] >= '0' && s[tab->len] <= '9')
		{
			substr = ft_substr(s, tab->len,
					(q = ft_strlen_print_f(s, tab->len)));
			tab->width = ft_atoi(substr);
			free(substr);
			substr = NULL;
			tab->len += q;
		}
		else if (s[tab->len] == '*')
			ft_axterix(tab);
	}
	return (tab->width);
}
