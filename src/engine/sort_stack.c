/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:11:56 by agarzon-          #+#    #+#             */
/*   Updated: 2022/11/02 14:27:19 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	sort_stack(t_stack *stack)
{
	int max_bits;
	int max_num;
	int	len;
	int	i;
	int	j;
	int	n;
	int	tmp;

	len  = stack->len_a;
	max_num = len;
	max_bits = 0;
	i = 0;
	while((max_num >> max_bits) != 0)
		++max_bits;
	while(i < max_bits)
	{
		j = 0;
		while(j < len)
		{
			n = stack->a[j];
			if (((n >> i)&1) == 1)
				rotate_stacks(stack->a, "ra", len);
			else
				push_stacks(stack, "pb");
			++j;
		}
		ft_printf("len b %d\n", stack->len_b);
		while(stack->len_b != 0)
			push_stacks(stack, "pa");
		++i;
	}
//	ft_printf("STACK: %d\n", stack->len_stack);
//	i = 0;
//	while(i < stack->len_stack)
//	{
//		n = stack->a[0];
//		if ((n >> i) &1)
//		{
//			swap_stacks(stack->a, "sa", stack->len_a);
//		}
//		else
//			push_stacks(stack, "pb");
		//ft_printf("STACK: %d\n", stack->a[i]);
//		i++;
//	}
//	while(stack->len_b != 0)
//		push_stacks(stack, "pa");
	return (0);
}
