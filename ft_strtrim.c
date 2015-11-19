#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*copy;
	int		start;
	int		final;

	if (s == NULL)
		return (NULL);
	if (s)
	{
		start = 0;
		final = ft_strlen(s) - 1;
		while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
			start++;
		while (s[final] == ' ' || s[final] == '\t' || s[final] == '\n')
			final--;
		if (start >= final)
			return ("");
		if (!(copy = ft_strsub(s, start, final - start + 1)))
			return (NULL);
		return (copy);
	}
	return (NULL);
}
