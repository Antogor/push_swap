/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:07:53 by agarzon-          #+#    #+#             */
/*   Updated: 2022/11/02 14:32:45 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_stack_is_sorted(int *a, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		if (a[i] > a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_run(t_stack *stack)
{
	int	i;

	if (ft_stack_is_sorted(stack->a, stack->len_a))
		ft_success(stack);
	stack->len_stack = stack->len_a;
	while (!ft_stack_is_sorted(stack->a, stack->len_a))
	{
		sort_stack(stack);
		ft_printf("%d\n", stack->a[i]);
		i++;
	}
	sort_stack(stack);
//	ft_stack_is_sorted(stack->a, stack->len_a);
	i = 0;
	while (i < stack->len_a)
		ft_printf("STACK: %d\n", stack->a[i++]);
	return (0);
}
