#include "push_swap.h"

int isArgumentsDigits(char **args)
{
	int i;
	int q;

	i = 1;
	q = 0;
	while(args[i])
	{
		q = 0;
		while(args[i][q])
		{
			if((!ft_isdigit(args[i][q]) && args[i][q] != '-')
				|| (args[i][q] == '-' && !ft_isdigit(args[i][q+1])))
				return 0;
			if(ft_strlen(&args[i][q]) > 11)
				return 0;
			q++;
		}
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	int i;
	int q;
	int *pila_a;
	int *pila_b;

	if(argc == 1)
		return 1;
	if(!isArgumentsDigits(argv))
	{
		ft_printf("Error\n");
		return 1;
	}
	pila_a = (int *)malloc(sizeof(int) * argc-1);
	i = 1;
	q = 0;
	while(argv[i] && q < argc -1)
		pila_a[q++] = ft_atoi(argv[i++]);
	q = 0;
	while(q < argc -1)
		ft_printf("Antes: %d\n",pila_a[q++]);
	push_b(pila_a, pila_b, argc-1);
	q = 0;
	while(pila_b[q])
		ft_printf("Pila B Despues: %d\n",pila_b[q++]);
	q = 0;
	while(pila_a[q])
		ft_printf("Pila A Despues: %d\n",pila_a[q++]);
	return 0;
}
