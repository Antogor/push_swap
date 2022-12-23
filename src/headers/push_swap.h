/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:57:05 by agarzon-          #+#    #+#             */
/*   Updated: 2022/09/30 18:54:41 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../../MyLIBFT/libft/libft.h"
# include "../../MyLIBFT/ft_printf/lib_ft_printf.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	len_a;
	int	len_b;
	int	len_stack;
}t_stack;

void	ft_error(t_list **stack);
void	ft_success(t_list **stack);
void	ft_validate(t_list *stack, int argc, char **arguments);
int		ft_run(t_list **stack);
int		swap_stacks(t_list *stack, char *ins, int len);
int		swap_a_b(t_list *a, t_list *b);
int		ft_push_a(t_list *stack_a, t_list *stack_b);
int		ft_push_b(t_list *stack_a, t_list *stack_b);
int		rotate_stacks(t_list *stack, char *ins, int len);
int		rotate_a_b(t_list *a, t_list *b);
int		reverse_rotate_stacks(t_list *stack, char *ins, int len);
int		reverse_rotate_a_b(t_list *a, t_list *b);
int		sort_stack(t_list *stack);
int		ft_vector_len(char **arg);
void    free_content(void *content);
void	ft_delete_last(t_list **stack);
void	print_content(void *content);
#endif
