/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:12:39 by laugusto          #+#    #+#             */
/*   Updated: 2024/10/22 17:00:31 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	ct1;
	size_t	ct2;

	ct1 = 0;
	ct2 = 0;
	if ((!dst || !src) && !dstsize)
		return (0);
	while (dst[ct1] && ct1 < dstsize)
	{
		ct1++;
	}
	if (dstsize > 0)
	{
		while (src[ct2] && ((ct1 + ct2) < dstsize - 1))
		{
			dst[ct1 + ct2] = src[ct2];
			ct2++;
		}
	}
	if (ct1 < dstsize)
		dst[ct1 + ct2] = '\0';
	return (ft_strlen(src) + ct1);
}
