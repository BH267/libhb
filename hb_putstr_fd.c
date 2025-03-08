/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:32:43 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/09 09:39:23 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	hb_putstr_fd(char *s, int fd)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return ;
	}
	while (*s)
		write(fd, s++, 1);
}

void	hb_putstr(char *s)
{
	if (!s)
	{
		write(1, "(null)", 6);
		return ;
	}
	while (*s)
		write(1, s++, 1);
}
