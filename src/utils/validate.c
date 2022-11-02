/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:49:33 by agarzon-          #+#    #+#             */
/*   Updated: 2022/11/02 10:49:15 by agarzon-         ###   ########.fr       */
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
		if (!ft_isdigit(c[i]))
			return (0);
		if (c[i + 1] == '-' || c[i + 1] == '+'
			|| (c[i] == '-' && c[i + 1] == '\0')
			|| (c[i] == '+' && c[i + 1] == '\0'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_parser_str(char **arguments, t_stack *stack)
{
	int		i;
	int		n;
	char	**split;

	split = ft_split(arguments[1], ' ');
	stack->len_a = ft_vector_len(split);
	stack->len_b = 0;
	stack->a = ft_allocate_malloc(stack->len_a);
	stack->b = NULL;
	i = 0;
	while (i < stack->len_a)
	{
		if (!ft_isnumeric(split[i]))
			ft_error(stack);
		n = (int)ft_atoi(split[i]);
		if (n < -2147483648 || n > 2147483647)
			ft_error(stack);
		stack->a[i] = (int)n;
		i++;
	}
	free(split);
}

void	ft_extract_args(t_stack *stack, int argc, char **arguments)
{
	int	i;
	int	j;
	int	n;

	stack->len_a = argc - 1;
	stack->len_b = 0;
	stack->a = ft_allocate_malloc(stack->len_a);
	stack->b = NULL;
	i = 1;
	j = 0;
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
}

void	ft_validate(t_stack *stack, int argc, char **arguments)
{
	int i;

//	i = 0;
//	while (i < argc)
//	{
		if (argc == 2)
			ft_parser_str(arguments, stack);
		else
			ft_extract_args(stack, argc, arguments);
		if (!ft_isduplicate(stack->a, stack->len_a))
			ft_error(stack);
//		i++;
//	}
}
