#include "libft.h"

unsigned long	ft_strlcat(char * restrict dst, const char * restrict src, unsigned long size)
{
       unsigned int i;
       unsigned int j;
        i = 0;
        j = 0;
        while (dst[j] != '\0')
                j++;
	size -= j + 1;
        while (src[i] != '\0')
        {
       		if (size > 0)
	         dst[j] = src[i];
                i++;
		j++;
                size--;
         }
	return (j);
}
