/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 05:39:14 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/16 05:39:14 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**xd;

	xd = lst;
	while (*lst)
	{
		del(lst->content)
		lst = lst->next;
	}
}