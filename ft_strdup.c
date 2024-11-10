#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int	i;
	char	*res;

	i = 0;
	res = malloc(ft_strlen(s));
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
