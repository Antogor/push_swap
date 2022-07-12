# include "push_swap.h"

int *ft_copy_array(int *ori, int len)
{
	int i;
	int *dest;

	i = 0;
	if(len == 0)
	{
		if(!(dest = (int *)malloc(sizeof(int)*1)))
			ft_error(NULL);
		return (dest);
	}
	if(!(dest = (int *)malloc(sizeof(int)*len)))
		ft_error(NULL);
	while(i < len)
	{
		dest[i] = ori[i];
		i++;
	}
	return (dest);
}
