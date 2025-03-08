/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:17:19 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/06 17:55:08 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

char	*hb_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	sl1;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	sl1 = hb_strlen(s1);
	start = 0;
	while (s1[start] && hb_strchr(set, s1[start]))
		start++;
	end = sl1;
	while (end > start && hb_strchr(set, s1[end - 1]))
		end--;
	res = (char *)malloc(end - start + 1);
	if (!res)
		return (NULL);
	hb_strlcpy(res, s1 + start, end - start + 1);
	res[end - start] = '\0';
	return (res);
}
