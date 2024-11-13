/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:09:21 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/13 01:09:21 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lsrc;
	size_t	ldest;

	i = 0;
	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);
	if (size < lsrc)
		return (size);
	while (*src && i <= size)
	{
		dest[ldest++] = *src++;
		i++;
	}
	dest[ldest] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}

int	main(void)
{
	char	*dest;
	char	*src;
	size_t	xd;
	dest = "aaaa\0        ";
	src = "bbbb";
	xd = ft_strlcat(dest, src, 5);
	int	i;
	i = 0;
	while (*dest)
	{
		write(1, &dest, 1);
	}
//	ft_putstr_fd(dest, 1);
	return (0);
}
