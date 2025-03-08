/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:58:37 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/24 10:00:31 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

int	hb_format(char sp, va_list list)
{
	int	cont;

	cont = 0;
	if (sp == 's')
		cont = hb_cputstr(va_arg(list, char *));
	else if (sp == 'd' || sp == 'i')
		cont = hb_cputnbr(va_arg(list, int));
	else if (sp == 'c')
		cont = hb_cputchar(va_arg(list, int));
	else if (sp == '%')
		cont = hb_cputchar('%');
	else if (sp == 'x' || sp == 'X')
		cont = hb_cputhexa(va_arg(list, unsigned int), sp);
	else if (sp == 'p')
	{
		cont = hb_cputstr("0x");
		cont += hb_cputhexa((va_arg(list, unsigned long)), 'x');
	}
	else if (sp == 'u')
		cont = hb_cputunbr(va_arg(list, unsigned int));
	else
		cont += hb_cputchar(sp);
	return (cont);
}

int	hb_printf(const char *f, ...)
{
	va_list	list;
	char	*sp;
	int		cont;

	if (!f || write(1, 0, 0) == -1)
		return (-1);
	va_start(list, f);
	cont = 0;
	sp = (char *) f;
	while (*sp)
	{
		if (*sp == '%')
		{
			if (*(sp + 1) == '\0')
				return (cont);
			cont += hb_format(*(++sp), list);
		}
		else
			cont += hb_cputchar(*sp);
		sp++;
	}
	va_end(list);
	return (cont);
}
/*
int main ()
{
	int l = hb_cprintf("%\n");
	int len2 = printf("%\n");
	printf("%i,  %i", l, len2);
}*/
