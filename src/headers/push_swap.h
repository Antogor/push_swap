/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:57:05 by agarzon-          #+#    #+#             */
/*   Updated: 2022/08/02 17:29:15 by agarzon-         ###   ########.fr       */
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
	int	len_stack;
	int	len_a;
	int	len_b;
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
int		*ft_copy_array(int *ori, int len);
int		*ft_allocate_malloc(int len);
int		sort_low_stack(t_stack *stack);

#endif
