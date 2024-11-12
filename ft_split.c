/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:30 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/08 16:47:30 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_charset(char str, char c)
{
	if (str == c)
		return (1);
	return (0);
}

int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_charset(str[i], c))
			count++;
		i++;
	}
	return (count);
}

char	*custom_dup(char *str, char c)
{
	int	i;
	char	*res;

	i = 0;
	while (!(is_charset(str[i], c)))
		i++;
	res = malloc(i + 1);
	if (!res)
		return (0);
	i = 0;
	while (!(is_charset(str[i], c)))
	{
		res[i] = str[i];
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		y;
	char	**res;

	res = malloc(count_words((char *)s, c) + 1);
	if (!res)
		return (0);
	i = 0;
	y = 0;
	while (s[i])
	{
		if (!(is_charset(s[i], c)))
			res[y] = custom_dup((char *)&s[i], c);
		i++;
		y++;
	}
	res[y] = 0;
	return (res);
}

int	main(void)
{
	#include <stdio.h>
	int	i;
	int	y;
	char **res;

	res = ft_split("helloxlesxamis", 'x');
	i = 0;
	y = 0;

	while (i < 10)
	{
		if (res[i])
			printf("%s", res[i]);
		i++;
		y++;
	}
	return (0);
}
