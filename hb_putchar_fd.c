/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:28:52 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/03 17:20:12 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	hb_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	hb_putchar(char c)
{
	write(1, &c, 1);
}
