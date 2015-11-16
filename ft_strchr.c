#include "libft.h"

char *ft_strchr(char *src, char c)
{
	int i = 0;
	while (src[i] != '\0')
	{
		if(src[i] == c)
			return (src + i);
		i++;
	}
	return (0);
}
