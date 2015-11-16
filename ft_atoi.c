#include "libft.h"

int ft_atoi(char *str)
{
	int res;
	int i;

	res = 0;
	i = 0;
	while (str[i] != '\0' && str[i] != '.')
	{
		res = res*10 + str[i] - '0';
		i++;
	}
	return (res);
}
