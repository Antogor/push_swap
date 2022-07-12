#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../MyLIBFT/libft/libft.h"
# include "../MyLIBFT/ft_printf/lib_ft_printf.h"
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stacks
{
		int *a;
		int *b;
		int len_stack;
		int len_a;
		int len_b;
}t_stack;

void ft_error(t_stack *stack);
void ft_success(t_stack *stack);
void ft_validate(t_stack *stack, int argc, char **arguments);
int ft_run(t_stack *stack);
int swap_stacks(int *stack, char *ins, int len);
int swap_a_b(int *a, int *b, int len_a, int len_b);
int push_stacks(int *dest, int *src, int *len_dest, int *len_src, char *ins);
int rotate_stacks(int *stack, char *ins, int len);
int rotate_a_b(int *a, int *b, int len_a, int len_b);
int reverse_rotate_stacks(int *stack, char *ins, int len);
int reverse_rotate_a_b(int *a, int *b, int len_a, int len_b);
int *ft_copy_array(int *ori, int len);

#endif
