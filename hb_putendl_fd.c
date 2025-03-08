/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:01:24 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/09 11:52:48 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	hb_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	hb_putstr_fd(s, fd);
	hb_putchar_fd('\n', fd);
}

void	hb_putendl(char *s)
{
	if (!s)
		return ;
	hb_putstr(s);
	hb_putchar('\n');
}
