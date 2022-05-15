# include "push_swap.h"
#include <stdlib.h>

void ft_error(t_stack *stack)
{
		if (stack)
		{
			if (stack->a)
				free(stack->a);
			if (stack->b)
				free(stack->b);
			free(stack);
		}
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
}
