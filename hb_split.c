/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <habenydi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:23:55 by habenydi          #+#    #+#             */
/*   Updated: 2024/11/09 16:03:04 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhb.h"

static int	ft_count_word(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static int	ft_free(char **s, size_t i)
{
	size_t	index;

	index = 0;
	while (index < i - 1)
	{
		free(s[index]);
		index++;
	}
	free(s);
	return (0);
}

static int	ft_write(char **s, const char *d, char c)
{
	size_t	wcont;
	size_t	start;
	size_t	index;

	wcont = 0;
	start = 0;
	index = 0;
	while (d[wcont])
	{
		while (d[wcont] == c)
			wcont++;
		if (!d[wcont])
			break ;
		start = wcont;
		while (d[wcont] && d[wcont] != c)
			wcont++;
		s[index] = ft_substr(d, start, wcont - start);
		if (!s[index++])
			return (ft_free(s, index));
	}
	s[index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**arr;

	if (!s)
		return (NULL);
	count = ft_count_word(s, c);
	arr = (char **)malloc((count + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (ft_write(arr, s, c) == 0)
		return (NULL);
	return (arr);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
// 	char	*string = "      split       this for   me  !       ";
// 	char	**expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});

// 	char	**result = ft_split(string, ' ');

// 	 while (*result)
// 	{
//                 if (strcmp(*result, *expected))
//                 {
//                         printf("TEST_FAILED");
//                 }
//                 result++;
//                 expected++;
//         }
//         printf("TEST_SUCCESS");
// }
