#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "MyLIBFT/libft/libft.h"

int	swap_numbers(int *stack);
int	push_a(int *stack_a, int *stack_b,int len);
int	push_b(int **stack_a, int **stack_b, int len);
int	rotate_numbers(int *stack);
int	reverse_rotate_numbers(int *stack, int len);

#endif
