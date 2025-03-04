/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:28:11 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/03 16:21:19 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	char	*p;

	p = (char *)str;
	while (n)
	{
		if (*p == (char)c)
			return (p);
		p++;
		n--;
	}
	return (NULL);
}
