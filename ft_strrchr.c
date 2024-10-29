/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:13:20 by laugusto          #+#    #+#             */
/*   Updated: 2024/10/16 12:21:51 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	temp_ch;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	temp_ch = c;
	while (len > 0 && *(s + len) != temp_ch)
		len--;
	if (*(s + len) == temp_ch)
		return ((char *)s + len);
	return (0);
}
