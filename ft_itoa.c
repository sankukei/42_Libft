/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 21:42:27 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/08 21:42:27 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_chackal(int n)
{
        int	i;

        i = 0;
  	if (n < 0)
        	n *= -1;
  	while (n > 10)
        {
        	n /= 10;
                i++;
        }
	return (i);
}

char	*ft_itoa(int n)
{
  	char	*res;
        int	size;
        int	neg;

        neg = 0;
        size = ft_chackal(n);
        if (n == -2147483648)
        	return (res = "-2147483648");
        if (n < 0)
        {
		n *= -1;
        	size++;
                neg = 1;
        }
	res = malloc(ft_chackal(n));
        while (size >= 0)
        {
          	res[size] = n % 10 + 48;
        	n /= 10;
        	if (size == 0 && neg == 1)
        		res[size] = '-';
                size--;
        }
	return (res);
}

int	main(void)
{
  	char *tmp = ft_itoa(-2147483648);
        printf("%s", tmp);
  	return 0;
}