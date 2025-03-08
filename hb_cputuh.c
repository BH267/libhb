/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_cputuh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:36:25 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/15 17:12:04 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

int	hb_cputhexa(unsigned long n, char x)
{
	char	*lwbase;
	char	*upbase;
	int		cont;

	cont = 0;
	lwbase = "0123456789abcdef";
	upbase = "0123456789ABCDEF";
	if (n < 16)
	{
		if (x == 'x')
			cont += hb_cputchar(*(n + lwbase));
		if (x == 'X')
			cont += hb_cputchar(*(n + upbase));
	}
	if (n >= 16)
	{
		cont += hb_cputhexa(n / 16, x);
		cont += hb_cputhexa(n % 16, x);
	}
	return (cont);
}

int	hb_cputunbr(unsigned int n)
{
	int	cont;

	cont = 0;
	if (n < 10)
		cont += hb_cputchar('0' + n);
	else
	{
		cont += hb_cputunbr(n / 10);
		cont += hb_cputunbr(n % 10);
	}
	return (cont);
}
