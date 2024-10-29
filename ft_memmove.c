/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:05:21 by laugusto          #+#    #+#             */
/*   Updated: 2024/10/15 14:08:24 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*s1;
	const char	*s2;

	i = -1;
	s1 = (char *)dest;
	s2 = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (s1 < s2)
	{
		while (++i < n)
			s1[i] = s2[i];
	}
	else
	{
		while (n > 0)
		{
			s1[n - 1] = s2[n - 1];
			n--;
		}
	}
	return ((void *)s1);
}
