#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	size = 0;
	if (s2[0] == 0)
		return ((char*)s1);
	while (s2[size])
		size++;
	while (s1[i] && i < n)
	{
		while (s1[i + j] == s2[j] && (i + j) < n)
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
