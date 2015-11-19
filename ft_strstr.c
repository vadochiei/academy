#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = 0;
	while (s2[size])
		size++;
	if (size == 0)
		return ((char*)s1);
	while (s1[i])
	{
		while (s1[i + j] == s2[j])
		{
			if (j == size - 1)
				return ((char*)s1 + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
