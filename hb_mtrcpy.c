/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_mtrcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:12:33 by habenydi          #+#    #+#             */
/*   Updated: 2025/03/09 12:12:57 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

char	**hb_mtrcpy(char **mtr)
{
	char	**m;
	size_t	i;

	m = (char **)malloc(hb_mtrlen(mtr) * (sizeof(char *) + 2));
	if (!m)
		return (NULL);
	i = 0;
	while (mtr[i])
	{
		m[i] = hb_strdup(mtr[i]);
		i++;
	}
	m[i] = NULL;
	return (m);
}
