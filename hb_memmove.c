/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:52:10 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/06 15:05:15 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	*hb_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (s < d)
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	else
	{
		while (len--)
			*(d++) = *(s++);
	}
	return (dest);
}
/*{
	void	*beff;

	beff = NULL;
	hhbmemcpy(beff, src, len);
	hb_memcpy(dest, beff, len);
	return (dest);
}*/
