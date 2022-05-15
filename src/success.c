# include "push_swap.h"

void ft_success(t_stack *stack)
{
		if (stack)
		{
			if (stack->a)
				free(stack->a);
			if (stack->b)
				free(stack->b);
			free(stack);
		}
		exit(EXIT_SUCCESS);
}
