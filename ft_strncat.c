#include "libft.h"
char *ft_strncat(char *s1, const char *s2, size_t n)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (s1[j] != '\0')
                j++;
        while (s2[i] != '\0' && n > 0)
        {
                s1[j + i] = s2[i];
                i++;
       		n--;
	}
	return (s1);
}
