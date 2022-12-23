/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:59:05 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/13 19:21:39 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_error(t_list **stack)
{
	if (stack)
		ft_lstclear(stack, free_content);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}
