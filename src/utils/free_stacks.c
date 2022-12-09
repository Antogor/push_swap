#include "../headers/push_swap.h"

void    free_stacks_a(t_stack *stack)
{
    free(stack->a);
}

void    free_stacks_b(t_stack *stack)
{
    free(stack->b);
}