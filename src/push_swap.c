/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:40:53 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/30 17:22:51 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/push_swap.h"

int	main(int argc, char **argv)
{
	t_list *stack_a;

	stack_a = NULL;
	if (argc <= 1)
		return (0);
	ft_validate(stack_a, argc, argv);
	ft_run(&stack_a);
	ft_success(&stack_a);
	return (0);
}
