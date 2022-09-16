/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_instructions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:50:43 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/16 20:17:18 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	swap_stacks(int *stack, char *ins, int len)
{
	int	tmp;

	if (len == 1 || len == 0)
		return (0);
	tmp = stack[1];
	stack[1] = stack[0];
	stack[0] = tmp;
	if (ins != NULL)
		ft_printf("%s\n", ins);
	return (0);
}

int	swap_a_b(int *a, int *b, int len_a, int len_b)
{
	swap_stacks(a, NULL, len_a);
	swap_stacks(b, NULL, len_b);
	ft_printf("ss\n");
	return (0);
}

int	push_stacks(t_stack *stack, char *ins)
{
	int	n;

	if (ft_strncmp(ins, "pa", 2) == 0)
	{
		if (stack->len_b != 0)
		{
			n = stack->b[0];
			ft_pop_b(stack);
			ft_push_a(stack, n);
		}
	}
	else
	{
		if (stack->len_a != 0)
		{
			n = stack->a[0];
			ft_pop_a(stack);
			ft_push_b(stack, n);
		}
	}
	ft_printf("%s\n", ins);
	return (0);
}
