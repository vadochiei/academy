#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	int i;
	int j;
	
	j = 0;
	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i != j)
		return (0);
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		return (1);
	}
}
