/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pop_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:42:27 by agarzon-          #+#    #+#             */
/*   Updated: 2022/11/02 15:41:17 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_pop_b(t_stack *stack)
{
	int	*copy_stack;
	int	i;

	stack->len_b -= 1;
	if (stack->len_b == 0 || stack->len_b < 0)
		return (0);
	copy_stack = ft_copy_array(stack->b, stack->len_b + 1);
	free(stack->b);
	stack->b = ft_allocate_malloc(stack->len_b);
	i = 0;
	while (i < stack->len_b)
	{
		stack->b[i] = copy_stack[i + 1];
		i++;
	}
	free(copy_stack);
	return (0);
}

int	ft_pop_a(t_stack *stack)
{
	int	*copy_stack;
	int	i;

	stack->len_a -= 1;
	if (stack->len_a == 0 || stack->len_a < 0)
		return (0);
	copy_stack = ft_copy_array(stack->a, stack->len_a + 1);
	free(stack->a);
	stack->a = ft_allocate_malloc(stack->len_a);
	i = 0;
	while (i < stack->len_a)
	{
		stack->a[i] = copy_stack[i + 1];
		ft_printf("AAA %d\n", stack->a[i]);
		i++;
	}
	free(copy_stack);
	return (0);
}

int	ft_push_b(t_stack *stack, int n)
{
	int	*copy_stack;
	int	i;

	i = 0;
	if (stack->len_b == 0)
	{
		stack->b = ft_allocate_malloc(1);
		stack->len_b += 1;
		stack->b[0] = n;
	}
	else
	{
		copy_stack = ft_copy_array(stack->b, stack->len_b);
		free(stack->b);
		stack->b = ft_allocate_malloc(stack->len_b + 1);
		stack->b[0] = n;
		while (i < stack->len_b)
		{
			stack->b[i + 1] = copy_stack[i];
			i++;
		}
		stack->len_b += 1;
		free(copy_stack);
	}
	return (0);
}

int	ft_push_a(t_stack *stack, int n)
{
	int	*copy_stack;
	int	i;

	i = 0;
	if (stack->len_a == 0)
	{
		stack->a = ft_allocate_malloc(1);
		stack->len_a += 1;
		stack->a[0] = n;
	}
	else
	{
		copy_stack = ft_copy_array(stack->a, stack->len_a);
		free(stack->a);
		stack->a = ft_allocate_malloc(stack->len_a + 1);
		stack->a[0] = n;
		while (i < stack->len_a)
		{
			stack->a[i + 1] = copy_stack[i];
			i++;
		}
		stack->len_a += 1;
		free(copy_stack);
	}
	return (0);
}
