#include "libft.h"

void    *ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (str1 == '\0' || str2 == '\0')
		return (0);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
