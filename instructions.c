#include "push_swap.h"

int swap_numbers(int *stack)
{
	int tmp;

	if (stack == NULL || (stack[0] != '\0' && stack[1] == '\0'))
		return 0;
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;

	return 1;
}

int push_a(int *stack_a, int *stack_b, int len)
{
	int *tmp_stack;
	int i;
	int q;

	if(stack_b == NULL)
		return 0;
	if(stack_a == NULL)
	{
		stack_a = (int *)malloc(sizeof(int) * 1);
		stack_a[0] = stack_b[0];
		tmp_stack = (int *)malloc(sizeof(int)*len-1);
		i = 1;
		q = 0;
		while(stack_b[i])
			tmp_stack[q++] = stack_b[i++];
		free(stack_b);
		stack_b = NULL;
		stack_b = tmp_stack;
	}
	return 1;
}

int push_b(int *stack_a, int *stack_b, int len)
{
	int *tmp_stack;
	int i;
	int q;

	if(stack_a == NULL)
		return 0;
	if(stack_b == NULL)
	{
		stack_b = (int *)malloc(sizeof(int) * 1);
		stack_b[0] = stack_a[0];
		tmp_stack = (int *)malloc(sizeof(int)*len-1);
		i = 1;
		q = 0;
		while(stack_a[i])
			tmp_stack[q++] = stack_a[i++];
		free(stack_a);
		//stack_a = NULL;
		stack_a = tmp_stack;
	}
	return 1;
}

int rotate_numbers(int *stack)
{
	int tmp;
	int i;
	
	if (stack == NULL || (stack[0] != '\0' && stack[1] == '\0'))
		return 0;
	tmp = stack[0];
	i = 0;
	while(stack[i])
	{
		stack[i] = stack[i+1];
		i++;
	}
	stack[i-1] = tmp;
	return 1;
}

int reverse_rotate_numbers(int *stack, int len)
{
	int tmp;
	int i;

	if (stack == NULL || (stack[0] != '\0' && stack[1] == '\0'))
		return 0;
	i = len -1;
	tmp = stack[i];
	while(i >= 0)
	{
		stack[i] = stack[i-1];
		i--;
	}
	stack[0] = tmp;
	return 1;
}
