/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:39:27 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/12 18:39:27 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
        size_t     i;

        i = 0;
        while (i <= size)
        {
                dst[i] = src[i];
                i++;
        }
	dst[i] = '\0';
        return (i);
}
