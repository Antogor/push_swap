/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_instructions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:50:43 by agarzon-          #+#    #+#             */
/*   Updated: 2022/11/02 15:40:18 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	swap_stacks(t_list *stack, char *ins, int len)
{
	void	*n;
	void	*n2;

	if (len == 1 || len == 0)
		return (0);
	n = stack->next->content;
    n2 = stack->content;
    stack->content = n;
    stack->next->content = n2;
	if (ins != NULL)
		ft_printf("%s\n", ins);
	n = NULL;
    n2 = NULL;
	return (0);
}

int	swap_a_b(t_list *a, t_list *b)
{
	swap_stacks(a, NULL, ft_lstsize(a));
	swap_stacks(b, NULL, ft_lstsize(b));
	ft_printf("ss\n");
	return (0);
}

int	ft_push_a(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;

	if (stack_a == NULL)
		return (0);
	tmp = stack_a;
    stack_a = stack_a->next;
    tmp->next = NULL;
	if (stack_b == NULL)
		stack_b = tmp;
	else
		ft_lstadd_front(&stack_b, tmp);
	ft_printf("pa\n");
	tmp = NULL;
	return (0);
}

int	ft_push_b(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;

	if (stack_b == NULL)
		return (0);
	tmp = stack_b;
	stack_b = stack_b->next;
    tmp->next = NULL;
	if (stack_a == NULL)
		stack_a = tmp;
	else
		ft_lstadd_front(&stack_a, tmp);
	ft_printf("pb\n");
	tmp = NULL;
	return (0);
}
