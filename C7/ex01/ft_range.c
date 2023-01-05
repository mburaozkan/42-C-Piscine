#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	ptr = (int *)malloc(sizeof(int)*(max - min));
	if (ptr == NULL)
	{
		return (0);
	}
	while (i != (max - min))
	{
		ptr[i] = min + i;
		i++;
	}

	return (ptr);
}
