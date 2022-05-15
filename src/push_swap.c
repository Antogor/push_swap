# include "push_swap.h"

int main(int argc, char **argv) 
{
	
	t_stack *stack;

	if (argc <= 1)
	{
		return (0);
	}

	if (!(stack = (t_stack *)malloc(sizeof(t_stack))))
		ft_error(stack);

	ft_validate(stack, argc, argv);
	//ft_run(*stack);

	ft_success(stack);
	return (0);
}
