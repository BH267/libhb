/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:10:28 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/05 16:07:11 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

int	hb_strncmp(char *s, char *p, size_t n)
{
	while (n)
	{
		if (!(*s) && !(*p))
			return (0);
		if (*s != *p)
			return ((unsigned char)*s - (unsigned char)*p);
		s++;
		p++;
		n--;
	}
	return (0);
}
