/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:07:53 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/27 17:57:23 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_stack_is_sorted(int *a, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i;
		while (j < len - 1)
		{
			if (a[j] > a[j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_run(t_stack *stack)
{
	int	i;

	if (ft_stack_is_sorted(stack->a, stack->len_stack))
		ft_success(stack);
	stack->len_a = stack->len_stack;
	stack->len_b = 0;
	return (0);
}
