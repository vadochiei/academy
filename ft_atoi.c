#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		negativ;
	int		nb;

	i = 0;
	nb = 0;
	negativ = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || \
			str[i] == ' ' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		negativ = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (negativ == 1)
		return (-nb);
	return (nb);
}
