/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:15:41 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/16 01:15:41 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
t_list *ft_lstnew(void *content)
{
	t_list *node;
	node = (t_list *)malloc(sizeof(t_list));
	node->content = content;
	node->next = NULL;
	return (node);
}*/

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{

	t_list	*xd1;
	t_list	*xd2;
	t_list	*xd3;

	int val1 = 1;
	int val2 = 2;
	int val3 = 3;

	xd1 = ft_lstnew((void *)1);
	xd2 = ft_lstnew((void *)&val2);
	xd3 = ft_lstnew((void *)&val3);

	xd1->next = xd2;
	xd2->next = xd3;


	printf("%d", ft_lstsize(xd1));
	return (0);
}*/
