#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t dstsize;
	size_t srcsize;

	i = 0;
	j = 0;
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	while (dst[i])
		i++;
	if (dstsize >= size)
		return (srcsize + size);
	while (src[j] && j < size - dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstsize + srcsize);
}
