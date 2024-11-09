/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 02:49:18 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/07 02:49:18 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_strlen(char const *str)
{
	int		i;

	i = 0;
	while (str[i])
			i++;
	return (i);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		y;

	y = 0;
	res = malloc(ft_strlen(s1) + 1);
	if (!res)
			return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (is_trim(s1[i], set))
		i++;
	while (is_trim(s1[j], set))
		j--;
	while (i <= j)
		res[y++] = s1[i++];
	return (res);
}
/*
int main (void)
{
	printf("%s", ft_strtrim("xxaaax//helloxlesamisxxxxx//xxx", "/xa"));
	ft_strtrim("xxxhelloxlesamisxxx", "x");
  	return (0);
}*/