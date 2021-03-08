#include "lib_ft_printf.h"
#include <stdio.h>

int main ()
{
	int x = 1234;
	int g = -3;
	char c = 'a';
	char *s = "abc";
	int f;
	int j;
	f = ft_printf("%*shola\n", 32, s);
	j = printf("%*shola\n", 32, s);
	printf("MIO: %d, ORIGINAL: %d\n", f,j);
	write(1, NULL, 1);
	return (0);
}