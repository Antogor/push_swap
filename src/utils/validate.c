/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:49:33 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/16 20:35:01 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_isduplicate(int *a, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	while (i < len)
	{
		tmp = a[i];
		while (j < len)
		{
			if (tmp == a[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	ft_isnumeric(char *c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(c);
	while (i < len)
	{
		if (ft_isdigit(c[i]))
			if (c[i + 1] == '-' || c[i + 1] == '+')
				return (0);
		i++;
	}
	return (1);
}
/*
char **ft_parser_str(char **arguments, int *n, int *argc)
{
		int i;
		int len;
		char **new;
	
		i = 0;
		len = ft_strlen(arguments[1]);
		ft_printf("LEN: %d\n", len);
		while(i < len)
		{
			if (arguments[1][i] == ' ')
			{
				new = ft_split(arguments[1], ' ');
				*argc = 4;
				*n = 0;
				return (new); 
			}
			i++;
		}
		return (arguments);
}
*/

void	ft_validate(t_stack *stack, int argc, char **arguments)
{
	int	i;
	int	j;
	int	n;

	i = 1;
	j = 0;
//	if (argc == 2)
//		arguments = ft_parser_str(arguments, &i, &argc);
	stack->len_stack = argc -1;
	stack->a = ft_calloc(argc, sizeof(int));
	while (i < argc)
	{
		if (!ft_isnumeric(arguments[i]))
			ft_error(stack);
		n = ft_atoi(arguments[i]);
		if (n < -2147483648 || n > 2147483647)
			ft_error(stack);
		stack->a[j] = (int)n;
		i++;
		j++;
	}
	if (!ft_isduplicate(stack->a, stack->len_stack))
		ft_error(stack);
}
