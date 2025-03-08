/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:32:19 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/09 09:44:52 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

t_list	*hb_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	void	*d;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		d = f(lst->content);
		node = hb_lstnew(d);
		if (!node)
		{
			del(d);
			hb_lstclear(&new, del);
			return (NULL);
		}
		hb_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
