/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   success.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:55:29 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/23 19:24:00 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_success(t_list **stack)
{
	if (stack)
		ft_lstclear(stack, free_content);
	exit(EXIT_SUCCESS);
}
