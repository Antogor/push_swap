/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 10:57:05 by agarzon-          #+#    #+#             */
/*   Updated: 2022/07/02 10:58:22 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../MyLIBFT/libft/libft.h"
# include "../MyLIBFT/ft_printf/lib_ft_printf.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	len_stack;
}t_stack;

void	ft_error(t_stack *stack);
void	ft_success(t_stack *stack);
void	ft_validate(t_stack *stack, int argc, char **arguments);
int	ft_run(t_stack stack);

#endif
