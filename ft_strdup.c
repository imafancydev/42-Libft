/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:11:58 by laugusto          #+#    #+#             */
/*   Updated: 2024/10/16 12:25:02 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*pointer;
	int		i;

	i = 0;
	pointer = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!pointer)
		return (NULL);
	while (src[i] != '\0')
	{
		pointer[i] = src[i];
		i++;
	}
	pointer[i] = '\0';
	return (pointer);
}
