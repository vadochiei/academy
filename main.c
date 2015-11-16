#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, int n);
int main()
{
	char s1[] = "Ana are mere";
	char s2[] = "Bibi are mere";
	//printf("%d\n", ft_strequ(s1, s2));
	//printf("%s", ft_memcpy(s1, s2, 3));
	//ft_memcpy(s1, s2, 3);
	memcpy(s1, s2, 3);
}
