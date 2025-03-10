/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_mtrfchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 07:38:12 by habenydi          #+#    #+#             */
/*   Updated: 2025/03/10 09:24:57 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

char	*hb_mtrfchr(char **mtr, char *str)
{
	int	i;

	i = 0;
	while (mtr && mtr[i])
	{
		if (hb_strncmp(mtr[i], str, hb_strlen(str)) == 0)
			return (mtr[i]);
		i++;
	}
	return (NULL);
}
