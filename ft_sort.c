#include "libft.h"

int		*ft_asc_sort(int *a, int n)
{
	int		i;
	int		j;
	int		aux;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j <= n)
		{
			if (a[i] > a[j])
			{
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
			}
			j++;
		}
		i++;
	}
	return (a);
}
