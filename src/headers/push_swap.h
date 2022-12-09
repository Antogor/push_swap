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

void	ft_error(t_stack *stack);
void	ft_success(t_stack *stack);
void	ft_validate(t_stack *stack, int argc, char **arguments);
int		ft_run(t_stack *stack);
int		swap_stacks(int *stack, char *ins, int len);
int		swap_a_b(int *a, int *b, int len_a, int len_b);
int		push_stacks(t_stack *stack, char *ins);
int		rotate_stacks(int *stack, char *ins, int len);
int		rotate_a_b(int *a, int *b, int len_a, int len_b);
int		reverse_rotate_stacks(int *stack, char *ins, int len);
int		reverse_rotate_a_b(int *a, int *b, int len_a, int len_b);
int		*ft_copy_array(int *src, int len);
int		*ft_allocate_malloc(int len);
int		sort_stack(t_stack *stack);
int		ft_push_a(t_stack *stack, int n);
int		ft_push_b(t_stack *stack, int n);
int		ft_pop_a(t_stack *stack);
int		ft_pop_b(t_stack *stack);
int		ft_vector_len(char **arg);
void    free_stacks_a(t_stack *stack);
void    free_stacks_b(t_stack *stack);
#endif
