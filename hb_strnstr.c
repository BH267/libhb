/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:09:41 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/09 12:19:22 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

char	*hb_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return (str);
	if (!len)
		return (NULL);
	if (len > hb_strlen(str))
		len = hb_strlen(str);
	i = 0;
	while (str[i] && i <= len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < len)
		{
			if (j == hb_strlen(to_find) - 1)
				return (str + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
