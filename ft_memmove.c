/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 23:07:05 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/06 23:07:05 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	char	*tmp;
	char	*a;
	const char	*b;

	i = 0;
	a = dest;
	b = src;

	while (*b)
		tmp[i] = b[i++];
	while (*tmp)
		*a++ = *b++;
	return (a);
}
