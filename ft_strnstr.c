/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:19:10 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/09 14:19:10 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *str)
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
        int	y;
        char	*ptr;

        i = 0;
        j = 0;
        ptr = 0;
        y = 0;
        if (big[i] == '\0')
        	return (0);
        while (big[i] && i <= len)
        {
          	y = i;
		while (big[y] == little[j])
                {
                	if (j == ft_strlen(little) - 1)
                        	return (ptr = (char *)&big[i]);
                        y++;
                        j++;
                }
                j = 0;
        	i++;
        }
        return (ptr);
}
/*
int 	main(void)
{
	#include <stdio.h>
  	printf("%s", ft_strnstr("hello les amis", "les", 10));
  	return (0);
}*/
