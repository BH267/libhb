/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_mtrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 11:54:30 by habenydi          #+#    #+#             */
/*   Updated: 2025/03/09 12:08:07 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

char	*hb_mtrchr(char **mtr, char *str)
{
	int	i;
	char	*to_find;

	while (mtr && mtr[i])
	{
		to_find = hb_strstr(mtr[i], str);
		i++;
	}
	return (to_find);
}
