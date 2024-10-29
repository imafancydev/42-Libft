/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:58:42 by laugusto          #+#    #+#             */
/*   Updated: 2024/10/22 17:31:52 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*items;
	size_t	i;

	i = nmemb * size;
	if ((nmemb) && (i) && ((i / nmemb) != size))
		return ((char *) NULL);
	items = malloc(i);
	if (!items)
		return (0);
	ft_bzero(items, i);
	return (items);
}
