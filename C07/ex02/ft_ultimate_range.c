#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*ret;
	int		len;

	len = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ret = malloc(sizeof(int) * (max - min));
	if (ret == NULL)
		return (0);
	while (min < max)
	{
		ret[len] = min;
		len++;
		min++;
	}
	*range = ret;
	return (len);
}
