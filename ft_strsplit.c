#include "libft.h"
#include <stdlib.h>

static char		**ft_malloc(const char *s)
{
	size_t	j;
	char	**new;

	j = 0;
	new = (char**)malloc(sizeof(char*) * (ft_strlen(s) + 1));
	while (j < ft_strlen(s))
	{
		new[j] = (char*)malloc(ft_strlen(s) + 1);
		j++;
	}
	return (new);
}

static char		**ft_strsplit2(char const *s, char c, char **new, int i)
{
	int	d;
	int	j;

	d = 0;
	j = 0;
	new = ft_malloc(s);
	while (s[i])
	{
		new[d][j] = s[i];
		i++;
		j++;
		if (s[i] == c)
		{
			new[d][j] = '\0';
			d++;
			j = 0;
			while (s[i] == c)
				i++;
		}
	}
	new[d + 1] = 0;
	if (s[i - 1] == c)
		new[d] = 0;
	return (new);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**new;

	if (s == NULL || c == '\0')
		return (NULL);
	new = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	new = ft_strsplit2(s, c, new, i);
	return (new);
}
