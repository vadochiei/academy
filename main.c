#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_bzero(void *s, long n);

int main()
{
	char a[] = "Ana are mere galbene si verzi.";

	ft_bzero(a, 10);
	return (0);
}
