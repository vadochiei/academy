#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	int		i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] == s2[i])
		{
			if (s1[i] == '\0')
				return (1);
			i++;
		}
	}
	return (0);
}
