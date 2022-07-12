# include "push_swap.h"
#include <stdlib.h>

int rotate_stacks(int *stack, char *ins, int len)
{
    int i;
    int tmp;

	if (len == 0 || len == 1)
		return (0);
    i = 0;
	tmp = stack[0];
    while(i < len-1)
    {
        stack[i] = stack[i+1];
        i++;
    }
	stack[len-1] = tmp;
    if(ins != NULL)
        ft_printf("%s\n", ins);

    return (0);
}

int rotate_a_b(int *a, int *b, int len_a, int len_b)
{
	rotate_stacks(a, NULL, len_a);
	rotate_stacks(b, NULL, len_b);
	ft_printf("rr\n");
	return (0);
}

int reverse_rotate_stacks(int *stack, char *ins, int len)
{
    int i;
    int tmp;

	if (len == 0 || len == 1)
		return (0);
    i = len-1;
	tmp = stack[len-1];
    while(i > 0)
    {
        stack[i] = stack[i-1];
        i--;
    }
	stack[0] = tmp;
    if(ins != NULL)
        ft_printf("%s\n", ins);

    return (0);
}

int reverse_rotate_a_b(int *a, int *b, int len_a, int len_b)
{
	reverse_rotate_stacks(a, NULL, len_a);
	reverse_rotate_stacks(b, NULL, len_b);
	ft_printf("rrr\n");
	return (0);
}
