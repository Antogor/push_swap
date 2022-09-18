/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:07:53 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/18 17:38:30 by agarzon-         ###   ########.fr       */
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
//	ft_printf("before %d\n", stack->len_a);
	rotate_stacks(stack->a, "ra", stack->len_a);
	swap_stacks(stack->a, "sa", stack->len_a);
	push_stacks(stack, "pb");
	swap_stacks(stack->a, "sa", stack->len_a);
	push_stacks(stack, "pa");
	swap_stacks(stack->a, "sa", stack->len_a);
	ft_printf("STACK B: %d\n", stack->b[0]);
	i = 0;
	while(i < stack->len_a)
	{
		ft_printf("STACK: %d\n", stack->a[i++]);
	}
	if (stack->len_b == 0 && ft_stack_is_sorted(stack->a, stack->len_a) == 1)
		ft_printf("END\n");
//	i = 0;
//	while(i < stack->len_a)
//	{
//		ft_printf("A: %d\n", stack->a[i++]);
//	}
//	i = 0;
//	while(i < stack->len_b)
//	{
//		ft_printf("B: %d\n", stack->b[i++]);
//	}
//	ft_printf("after %d\n", stack->len_a);
//	ft_printf("before %d\n", stack->len_a);
//	push_stacks(stack, "");
//	ft_printf("after %d\n", stack->len_a);
//	sort_low_stack(stack);
//	sort_low_stack(stack);
//	sort_low_stack(stack);
//	sort_low_stack(stack);
//	sort_low_stack(stack);
//	while(1)
//	{
//		sort_low_stack(stack);
//		if (stack->len_b == 0 && ft_stack_is_sorted(stack->a, stack->len_a) == 1)
//		{
//			ft_printf("AAAAAAA\n");
//			break;
//		}
//		i = 0;
//		while(i < stack->len_a)
//		{
//			ft_printf("STACK: %d\n", stack->a[i++]);
//		}
//	}
//	ft_printf("STACKAAAAAAAAAAAAAAAAa");
//	i = 0;
//	while(i < stack->len_a)
//	{
//		ft_printf("%d\n", stack->a[i++]);
//		//ft_printf("I: %d\n", i);
//	}
	return (0);
}
