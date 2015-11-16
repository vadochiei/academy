<<<<<<< HEAD
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
=======
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_bzero(void *s, long n);

int main()
{
	char a[] = "Ana are mere galbene si verzi.";

	ft_bzero(a, 10);
	return (0);
>>>>>>> 98e08c27c3e7bf6800b37d190e603243da32cf28
}
