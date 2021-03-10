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
	int pila_a[argc -1];
	int pila_b[argc -1];

	if(argc == 1)
		return 1;
	if(!isArgumentsDigits(argv))
	{
		ft_printf("Error\n");
		return 1;
	}
	i = 1;
	q = 0;
	while(argv[i] && q < argc -1)
		pila_a[q++] = ft_atoi(argv[i++]);
	return 0;
}
