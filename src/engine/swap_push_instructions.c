/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_instructions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:50:43 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/13 19:21:00 by agarzon-         ###   ########.fr       */
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

int	ft_extract_src(int *src, int *len)
{
	int	*copy_src;
	int	i;

	i = 0;
	copy_src = ft_copy_array(src, *len);
	free(src);
	*len -= 1;
	if (*len <= 0)
		src = ft_allocate_malloc(1);
	else
	{
		src = ft_allocate_malloc(*len);
		while (i < *len)
		{
			src[i] = copy_src[i + 1];
			i++;
		}
	}
	free(copy_src);
	return (0);
}

int	ft_extract_dest(int *dest, int *len, int n)
{
	int	*copy_dest;
	int	i;

	i = 0;
	copy_dest = ft_copy_array(dest, *len);
	free(dest);
	*len += 1;
	dest = ft_allocate_malloc(*len);
	dest[0] = n;
	i = *len - 1;
	while (i > 0)
	{
		dest[i] = copy_dest[i - 1];
		i--;
	}
	free(copy_dest);
	return (0);
}

int	push_stacks(t_stack *stack, char *ins)
{
	int	*dest;
	int	*src;
	int	*len_dest;
	int	*len_src;

	if (ft_strncmp(ins, "pa", 2) == 0)
	{
		dest = stack->a;
		src = stack->b;
		len_dest = &stack->len_a;
		len_src = &stack->len_b;
	}
	else
	{
		dest = stack->b;
		src = stack->a;
		len_dest = &stack->len_b;
		len_src = &stack->len_a;
	}
	if (!src)
		return (0);
	ft_extract_dest(dest, len_dest, src[0]);
	ft_extract_src(src, len_src);
	ft_printf("%s\n", ins);
	return (0);
}
