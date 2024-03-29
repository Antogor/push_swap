/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:11:56 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/18 13:35:57 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	sort_low_stack(t_stack *stack)
{
	int max_bits;
	int	len;
	int	i;
	int	j;
	int	n;
	int	tmp;

//	max_bits = 0;
//	len  = stack->len_a;
//	i = 0;
//	while((len >> max_bits) != 0)
//		max_bits++;
//	while(i < max_bits)
//	{
//		j = 0;
//		while(j < stack->len_a)
//		{
//			n = stack->a[j];
//			tmp = n >> j;
//			if (((n >> i)&1) == 1)
//				rotate_stacks(stack->a, "ra", len);
//			else
//				push_stacks(stack, "pb");
//			j++;
//		}
//		while(stack->len_b != 0)
//			push_stacks(stack, "pa");
//		i++;
//	}
//	ft_printf("STACK: %d\n", stack->len_stack);
	i = 0;
	while(i < stack->len_stack)
	{
//		n = stack->a[0];
//		if ((n >> i) &1)
//		{
//			rotate_stacks(stack->a, "ra", stack->len_a);
//		}
//		else
			push_stacks(stack, "pb");
		//ft_printf("STACK: %d\n", stack->a[i]);
		i++;
	}
	while(stack->len_b != 0)
		push_stacks(stack, "pa");
	return (0);
}
