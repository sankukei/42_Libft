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
	int	len;


	len = ft_strlen(src);
	i = 0;
	while (*src && i + 1 < size)
	{

		i++;	
	}
	return (ft_strlen(src) + ft_strlen(dest));
}
