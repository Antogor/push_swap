#include "MyLIBFT/libft/libft.h"

int main(int argc, char **argv)
{
	int cont;
	int cont2;
	int number;
	int pila_a[argc];
	int pila_b[argc];

	if(argc == 1)
		return 1;
	cont = 1;
	cont = 0;
	while(argv[cont])	
	{
		number = ft_atoi(argv[cont]);
		ft_printf("%d", number);
		if(ft_isdigit(number) == 0)
		{
			ft_printf("Error\n");
			return 1;
		}
		pila_a[cont2++] = number;
		cont++;
	}
	return 0;
}
