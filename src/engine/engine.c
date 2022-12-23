/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:07:53 by agarzon-          #+#    #+#             */
/*   Updated: 2022/12/09 18:56:27 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_stack_is_sorted(t_list *stack)
{
	t_list *aux;
    int len;
    int i;

    len = ft_lstsize(stack);
    aux = stack;
    i = 0;
    while (i < len)
    {
        if (*((int*)aux->content) > *((int*)aux->next->content))
            return 0;
        aux = aux->next;
        i++;
        
    }
    return 1;
}

int	ft_run(t_list **stack)
{
    t_list  *stack_a;
    t_list  *stack_b;

    stack_a = *stack;
    stack_b = NULL;
	if (ft_stack_is_sorted(stack_a)){
		ft_success(&stack_a);
    }
	//sort_stack(stack_a);

	//ft_printf("%d\n",*(int*)stack_a->content);
    ft_lstiter(stack_a, print_content);
    ft_lstiter(stack_b, print_content);
	return (0);
}
