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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int	lsrc;
	int	ldest;

	i = 0;
	lsrc = ft_strlen(src);
	ldest = ft_strlen(dest);

	while (*src && i + 1 < size)
	{
		dest[ldest++] = *src++;
		i++;
	}
	dest[ldest] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}
/*
int	main(void)
{
	int 	i;

	i = 0;
	return (0);
}*/
