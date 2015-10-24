char *ft_strstr(char *big, char *little)
{
	unsigned long i;
	unsigned long j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i] != '\0')
	{
		if (big[i] == little[j])
		{
			while (big [i + j] == little[j])
			{
				if (little[j + 1] == '\0')
					return (big + i);
				j++;
			}
			j = 0;
			
		}
		i++;
	}
	return (0);
}