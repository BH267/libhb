/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_mtrrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:54:30 by habenydi          #+#    #+#             */
/*   Updated: 2025/03/09 15:06:06 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

char	*hb_mtrrchr(char **mtr, char *str)
{
	int	i;
	char	*to_find;

	i = hb_mtrlen(mtr) - 1;
	while (mtr && i >= 0)
	{
		to_find = hb_strstr(mtr[i], str);
		if (to_find)
			break;
		i--;
	}
	return (to_find);
}
