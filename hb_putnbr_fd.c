/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:36:25 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/06 22:11:23 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	hb_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		hb_putchar_fd('-', fd);
	}
	if (n < 10)
		hb_putchar_fd('0' + n, fd);
	else
	{
		hb_putnbr_fd(n / 10, fd);
		hb_putnbr_fd(n % 10, fd);
	}
	return ;
}

void	hb_putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		hb_putchar('-');
	}
	if (n < 10)
		hb_putchar('0' + n);
	else
	{
		hb_putnbr(n / 10);
		hb_putnbr(n % 10);
	}
	return ;
}

