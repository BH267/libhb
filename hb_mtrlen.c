/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hb_mtrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:12:09 by habenydi          #+#    #+#             */
/*   Updated: 2025/03/09 12:12:57 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

size_t	hb_mtrlen(char **mtr)
{
	size_t	i;

	i = 0;
	while (mtr[i])
		i++;
	return (i);
}
