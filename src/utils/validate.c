/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:49:33 by agarzon-          #+#    #+#             */
/*   Updated: 2022/11/02 10:49:15 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	ft_isduplicate(t_list *stack)
{
	t_list	*aux;
	t_list	*aux2;

	aux = stack;
	while (aux)
	{
		aux2 = aux->next;
		while (aux2)
		{
			if (*(int*)aux->content == *(int*)aux2->content)
				return (0);
			aux2 = aux2->next;
		}
		aux = aux->next;
	}
	return (1);
}

int	ft_isnumeric(char *c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(c);
	while (i < len)
	{
		if (!ft_isdigit(c[i]))
			return (0);
		if (c[i + 1] == '-' || c[i + 1] == '+'
			|| (c[i] == '-' && c[i + 1] == '\0')
			|| (c[i] == '+' && c[i + 1] == '\0'))
			return (0);
		i++;
	}
	return (1);
}

void	ft_parser_str(char **arguments, t_list *stack)
{
	int		i;
	int		n;

	i = 0;
	while (i < ft_vector_len(arguments))
	{
		if (!ft_isnumeric(arguments[i]))
			ft_error(&stack);
		n = ft_atoi(arguments[i]);
		if (n < -2147483648 || n > 2147483647)
			ft_error(&stack);
		ft_lstadd_back(&stack, ft_lstnew(&n));
		i++;
	}
}

void	ft_extract_args(t_list *stack, int argc, char **arguments)
{
	int		i;
	int		n;
	char	**split;
	t_list	*tmp = NULL;

	i = 1;
	//tmp = *stack;
	while (i < argc)
	{
		if(ft_strrchr(arguments[i], ' '))
		{
			split = ft_split(arguments[i], ' ');
			ft_parser_str(split, stack);
		}
		else
		{
			if (!ft_isnumeric(arguments[i]))
				ft_error(&stack);
			n = ft_atoi(arguments[i]);
			if (n < -2147483648 || n > 2147483647)
				ft_error(&stack);
			ft_lstadd_back(&tmp, ft_lstnew(&n));
			ft_printf("%d Iter: \n",i);
			ft_lstiter(tmp, print_content);
			ft_printf("-----------------\n");
		}
		i++;
	}
}

void	ft_validate(t_list *stack, int argc, char **arguments)
{
	t_list	*tmp;

	ft_extract_args(stack, argc, arguments);
	if (!ft_isduplicate(tmp))
		ft_error(&tmp);
	ft_printf("%d\n", *(int*)tmp->content);
}
