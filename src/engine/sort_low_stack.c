/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:11:56 by agarzon-          #+#    #+#             */
/*   Updated: 2022/08/23 17:50:30 by agarzon-         ###   ########.fr       */
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

	max_bits = 0;
	len  = stack->len_a;
	i = 1;
	while((len >> max_bits) != 0)
		max_bits++;
	while(i < max_bits + 1)
	{
		j = 0;
		while(j < stack->len_a)
		{
			n = stack->a[j];
			ft_printf("J: %d\n", j);
			ft_printf("STACK LEN: %d\n", stack->len_a);
			ft_printf("N: %d\n", n);
			if (((n >> i)&1) == 1)
				rotate_stacks(stack->a, "ra", len);
			else
				push_stacks(stack, "pb");
			j++;
		}
		while(stack->len_b != 0)
			push_stacks(stack, "pa");
		i++;
	}
	return (0);
}
