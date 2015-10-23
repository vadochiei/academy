#include <unistd.h>
#include <stdio.h>
void ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
}
int main()
{
	char a[] = "ANA ARE MERE";
	char b[] = "X";
	ft_strcpy(a, b);
	printf("%s", a);
}
