/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:40:53 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/02 10:47:10 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (argc <= 1)
	{
		return (0);
	}
	if (!stack)
		ft_error(stack);
	ft_validate(stack, argc, argv);
	ft_run(*stack);
	ft_success(stack);
	return (0);
}
