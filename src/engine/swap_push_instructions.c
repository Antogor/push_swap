/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_instructions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:50:43 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/09 18:58:27 by agarzon-         ###   ########.fr       */
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

int	ft_pop(int *stack, int *len)
{
	int	*copy_stack;
	int	i;

	*len -= 1;
	if (*len == 0 || *len < 0)
		return (0);
	copy_stack = ft_copy_array(stack, *len + 1);
	free(stack);
	stack = ft_allocate_malloc(*len);
	i = 0;
	while (i < *len)
	{
		stack[i] = copy_stack[i + 1];
		i++;
	}
	free(copy_stack);
	return (0);
}

int	ft_push(int *stack, int *len, int n)
{
	int	*copy_stack;
	int	i;

	i = 0;
	copy_stack = ft_copy_array(stack, *len);
	free(stack);
	*len += 1;
	stack = ft_allocate_malloc(*len);
	stack[0] = n;
	while (i < *len)
	{
		stack[i + 1] = copy_stack[i];
		i++;
	}
	free(copy_stack);
	return (0);
}

int	push_stacks(t_stack *stack, char *ins)
{
	int	*copy_dest;
	int	i;
	i = 0;
	
	//ft_pop(stack->a, &stack->len_a);
	ft_push(stack->a, &stack->len_a, 6);
//	if (ft_strncmp(ins, "pa", 2) == 0)
//	{
//	
//		copy_dest = ft_copy_array(stack->a, stack->len_a);
//		free(stack->a);
//		stack->len_a += 1;
//		stack->a = ft_allocate_malloc(stack->len_a);
//		stack->a[0] = stack->b[0];
//		i = stack->len_a - 1;
//		while (i > 0)
//		{
//			stack->a[i] = copy_dest[i - 1];
//			i--;
//		}
//		free(copy_dest);
//		ft_extract_dest(stack->a, &stack->len_a, stack->b[0]);
//		ft_extract_src(stack->b, &stack->len_b);
//	}
//	else
//	{
//		ft_extract_dest(stack->b, &stack->len_b, stack->a[0]);
//		ft_extract_src(stack->a, &stack->len_a);
//	}
//	//if (!src)
//	//	return (0);
//	ft_printf("%s\n", ins);
	return (0);
}
