#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int q;
	int i;

	i = 0;
	q = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
