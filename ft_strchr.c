char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*res;

	res = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (res = (char *)&s[i]);
		i++;
	}
	return (res);
}
