/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:10:28 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/09 20:50:42 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

size_t	ft_strlcat(char *dest, const char *src, size_t l)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;

	i = 0;
	if (!l)
		return (ft_strlen(src));
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (l <= dlen)
		return (l + slen);
	while (dlen + i < l - 1 && src[i])
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}
