/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:08:55 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/09 16:14:07 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	*ft_calloc(size_t len, size_t b)
{
	void	*p;

	if (b && len > SIZE_MAX / b)
		return (NULL);
	p = malloc(len * b);
	if (!p)
		return (NULL);
	ft_bzero(p, len * b);
	return (p);
}
