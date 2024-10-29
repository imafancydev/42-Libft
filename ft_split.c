/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:06:03 by laugusto          #+#    #+#             */
/*   Updated: 2024/10/22 17:28:30 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_substring(const char *s, char c)
{
	size_t	substring;

	substring = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			++substring;
			while (*s != '\0' && *s != c)
				++s;
		}
		else
			++s;
	}
	return (substring);
}

char	**ft_split(const char *s, char c)
{
	char	**substring;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	substring = malloc(sizeof(char *) * (ft_substring(s, c) + 1));
	if (!substring)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s != '\0' && *s != c && ++len)
				++s;
			substring[i++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	substring[i] = 0;
	return (substring);
}
