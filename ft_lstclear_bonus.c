/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leothoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 05:39:14 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/16 05:39:14 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	int		count;
	t_list	**xd;

	xd = lst;
	count = 0;
	while (*lst)
	{
		lst = lst->next;
		count++;
	}
}
