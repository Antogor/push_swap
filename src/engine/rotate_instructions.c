/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_instructions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:57:16 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/30 17:27:36 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	rotate_stacks(t_list *stack, char *ins, int len)
{
	t_list	*tmp;

	if (len == 0 || len == 1)
		return (0);
	tmp = stack;
    stack = stack->next;
    ft_lstadd_back(&stack, tmp);
    tmp = NULL;
	if (ins != NULL)
		ft_printf("%s\n", ins);
	return (0);
}

int	rotate_a_b(t_list *a, t_list *b)
{
	rotate_stacks(a, NULL, ft_lstsize(a));
	rotate_stacks(b, NULL, ft_lstsize(b));
	ft_printf("rr\n");
	return (0);
}

int	reverse_rotate_stacks(t_list *stack, char *ins, int len)
{
	t_list	*tmp;

	if (len == 0 || len == 1)
		return (0);
	tmp = ft_lstlast(stack);
    ft_delete_last(&stack);
    ft_lstadd_front(&stack, tmp);
	tmp = NULL;
	if (ins != NULL)
		ft_printf("%s\n", ins);
	return (0);
}

int	reverse_rotate_a_b(t_list *a, t_list *b)
{
	reverse_rotate_stacks(a, NULL, ft_lstsize(a));
	reverse_rotate_stacks(b, NULL, ft_lstsize(b));
	ft_printf("rrr\n");
	return (0);
}
