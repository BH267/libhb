/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:54:33 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/06 17:35:29 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

size_t	hb_strlcpy(char *dest, const char *src, size_t l)
{
	size_t	i;

	if (l == 0)
		return (hb_strlen(src));
	i = 0;
	while (i < l - 1 && i < hb_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (hb_strlen(src));
}
