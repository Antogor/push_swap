/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:11:56 by agarzon-          #+#    #+#             */
/*   Updated: 2022/12/09 19:31:42 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	down_position(int *stack, int len)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	while(i < len)
	{
		j = 0;
		while(j < len)
		{
			if (stack[i] < stack[j + 1] && j != len)
			{
				pos = i;
				ft_printf("%d - %d\n", stack[i], stack[i+1]);
			}
			j++;
		}
		ft_printf("---------------\n");
		i++;
	}
	return pos;
}

int	sort_stack(t_stack *stack)
{
	ft_printf("POS: %d\n", down_position(stack->a, stack->len_a));
	return 0;
}
