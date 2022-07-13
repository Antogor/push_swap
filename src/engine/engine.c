/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:07:53 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/13 19:20:30 by agarzon-         ###   ########.fr       */
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
//
//	swap_stacks(stack->a, "sa", stack->len_a);
//	ft_printf("N: %d\n", stack->a[0]);
//	swap_a_b(stack->a, stack->b, stack->len_a, stack->len_b);
//	ft_printf("N: %d\n", stack->a[0]);
//	rotate_stacks(stack->a, "ra", stack->len_a);
//	ft_printf("N: %d\n", stack->a[0]);
//	ft_printf("N: %d\n", stack->a[1]);
//	ft_printf("N: %d\n", stack->a[2]);
//
	i = 0;
//	while(i < stack->len_a)
//	{
//		ft_printf("A BEFORE: %d\n", stack->a[i]);
//		i++;
//	}
	push_stacks(stack, "pb");
	ft_printf("A SWAP: %d\n", stack->a[i]);
	ft_printf("B SWAP: %d\n", stack->b[i]);
//	push_stacks(stack->b, stack->a, &stack->len_b, &stack->len_a, "pb");
//	push_stacks(stack->a, stack->b, &stack->len_a, &stack->len_b, "pa");
//	swap_stacks(stack->a, "sa", stack->len_a);
	i = 0;
	while (i < stack->len_a)
	{
		ft_printf("A SWAP: %d\n", stack->a[i]);
		i++;
	}
//	rotate_stacks(stack->b, "rb", stack->len_b);
//	reverse_rotate_a_b(stack->a, stack->b, stack->len_a, stack->len_b);
//	push_stacks(stack->b, stack->a, &stack->len_b, &stack->len_a, "pb");
//	push_stacks(stack->b, stack->a, &stack->len_b, &stack->len_a, "pb");
//	i = 0;
//	while(i < stack->len_a)
//	{
//		ft_printf("A AFTER: %d\n", stack->a[i]);
//		i++;
//	}
//	i = 0;
//	while(i < stack->len_b)
//	{
//		ft_printf("B AFTER: %d\n", stack->b[i]);
//		i++;
//	}
	return (0);
}
