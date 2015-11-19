#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*copy;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(copy = (char*)malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		copy[i] = s[start];
		i++;
		start++;
	}
	copy[i] = '\0';
	return (copy);
}
