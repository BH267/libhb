/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:29:34 by habenydi          #+#    #+#             */
/*   Updated: 2025/03/11 11:46:54 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

void	*hb_realloc(void *ptr, size_t size)
{
	void	*newblock;

	if (ptr == NULL)
		return (malloc(size));
	if (size == 0)
		return (free(ptr), NULL);
	newblock = malloc(size);
	if (!newblock)
		return (NULL);
	hb_memcpy(newblock, ptr, size);
	free(ptr);
	return (newblock);
}
