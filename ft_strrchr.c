char *ft_strrchr(char *src, char c)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if(src[i] == c)
			return (src + i);
		i--;
	}
	return (0);
}
