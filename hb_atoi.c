/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:05:45 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/07 09:44:05 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

int	ft_atoi(const char *nbr)
{
	int	n;
	int	s;

	s = 1;
	n = 0;
	while (!ft_isdigit(*nbr) && *nbr != '-' && *nbr != '+')
	{
		if ((9 <= *nbr && *nbr <= 13) || *nbr == 32)
			nbr++;
		else
			return (0);
	}
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			s = -1;
		nbr++;
	}
	while (ft_isdigit(*nbr))
	{
		n = n * 10 + (*nbr - '0');
		nbr++;
	}
	return (n * s);
}
