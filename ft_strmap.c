#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*copy;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	copy = (char*)malloc(i + 1);
	i = 0;
	while (s[i])
	{
		copy[i] = f(s[i]);
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
