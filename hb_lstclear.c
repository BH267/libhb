/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:18:06 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/09 09:44:19 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	hb_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;

	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		n = (*lst)->next;
		hb_lstdelone(*lst, del);
		*lst = n;
	}
	lst = NULL;
}
