/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   success.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:55:29 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/02 10:56:52 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_success(t_stack *stack)
{
	if (stack)
	{
		if (stack->a)
			free(stack->a);
		if (stack->b)
			free(stack->b);
		free(stack);
	}
	exit(EXIT_SUCCESS);
}
