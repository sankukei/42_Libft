/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:19:10 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/09 14:19:10 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>


static size_t	ft_strlenx(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		y;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = 0;
	y = 0;
	if (ft_strlenx(big) == 0)
		return (0);
	if (ft_strlenx(little) == 0)
		return ((char *)big);
	while (big[i] && i <= len && y <= len)
	{
		y = i;
		while (big[y] == little[j])
		{
			if (j == ft_strlenx(little) - 1)
				return (ptr = (char *)&big[i]);
			y++;
			j++;
		}
		j = 0;
		i++;
	}
	return (ptr);
}

int 	main(void)
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
  	return (0);
}
