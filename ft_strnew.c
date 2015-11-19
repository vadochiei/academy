#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char*)(malloc(sizeof(str) * size + 1));
	if (str == NULL)
		return (NULL);
	while (size != 0)
	{
		str[size] = '\0';
		size--;
	}
	return (str);
}
