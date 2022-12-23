/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:03:51 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/30 17:23:25 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_vector_len(char **arg)
{
	char	**aux;
	int		len;

	aux = arg;
	len = 0;
	while (*aux)
	{
		aux++;
		len++;
	}
	return (len);
}

void	ft_delete_last(t_list **stack)
{
	t_list *aux;

	aux = *stack;
	while (aux)
	{
		if (aux->next->next == NULL)
			aux->next = NULL;
		aux = aux->next;
	}
}

void    free_content(void *content)
{
	if(content)
    	free(content);
}

void	print_content(void *content)
{
	if(content)
		ft_printf("%d\n", *(int*)content);
}