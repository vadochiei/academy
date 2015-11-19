#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;

	p = (unsigned char*)(s);
	while (n != 0)
	{
		if (*p != (unsigned char)c)
			p++;
		else
			return (p);
		n--;
	}
	return (NULL);
}
