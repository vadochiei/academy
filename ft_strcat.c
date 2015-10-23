#include <unistd.h>
#include <stdio.h>
void ft_strcat(char *dest, const char *src, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
}
int main()
{
	char a[] = "Ana are mere";
	char b[] = "si pere";
	ft_strcat(a, b, 10);
	printf("%s\n", a);
}
