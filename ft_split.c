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
#include <stdio.h>

static void	free_all(char **res, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		free(res[i]);
		i++;

	}
	free(res);
}

static int	is_charset(char str, char c)
{
	if (str == c)
		return (1);
	return (0);
}

static int	count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!(is_charset(str[0], c)))
		count++;
	while (str[i] && str[i + 1])
	{
		if (is_charset(str[i], c) && (!(is_charset(str[i + 1], c))))
			count++;
		i++;
	}
	count++;
	return (count);
}

static char	*custom_dup(char *str, char c, char **tmp, int y)
{
	int		i;
	char	*res;

	i = 0;
	while (str[i] && (!(is_charset(str[i], c))))
		i++;
	res = malloc(i + 1);
	if (!res)
	{
		free_all(tmp, y);
		return (NULL);
	}
	i = 0;
	while (str[i] && (!(is_charset(str[i], c))))
	{
		res[i] = *str++;
		i++;
	}
        res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{

	int		y;
	char	**res;
	char const	*sinistre;

	res = malloc(count_words((char *)s, c) * sizeof(char *));
	if (!res)
		return (NULL);
	y = 0;
	while (*s)
	{
		if (!(is_charset(*s, c)))
		{
			res[y] = custom_dup((char *)s, c, res, y);
			if (!res[y])
				return (NULL);
			sinistre = s;
			while (*sinistre && is_charset(*sinistre, c) == 0)
				sinistre++;
			s = sinistre - 1;
		}
		s++;
		y++;
	}
	res[y] = 0;
	return (res);
}

int	main(void)
{
	int	i;
	int	y;
	char **res;

	res = ft_split("hello!", ' ');
	i = 0;
	y = 0;
	while (i < 1)
	{
		if (res[i])
			printf("%s", res[i]);
		i++;
		y++;
	}
	free_all(res, i);
	return (0);
}
