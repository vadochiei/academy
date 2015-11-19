#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void		*memory;
	size_t		i;

	i = 0;
	if (!(memory = (void*)malloc(sizeof(void) * size)) || !size)
		return (NULL);
	while (i < size)
	{
		*(unsigned char*)(memory + i) = 0;
		i++;
	}
	return (memory);
}
