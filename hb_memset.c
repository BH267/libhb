/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:46:30 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/04 15:48:07 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	*hb_memset(void *arr, int c, size_t l)
{
	unsigned char	*p;

	p = (unsigned char *)arr;
	while (l--)
		*(p++) = (unsigned char)c;
	return (arr);
}
