/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:13:14 by laugusto          #+#    #+#             */
/*   Updated: 2024/10/21 19:01:07 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ct1;
	size_t	ct2;

	ct1 = 0;
	if ((!big || !little) && !len)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[ct1])
	{
		ct2 = 0;
		while (big[ct1 + ct2] == little[ct2] && (ct1 + ct2) < len)
		{
			if (big[ct1 + ct2] == '\0' && little[ct2] == '\0')
				return ((char *)&big[ct1]);
			ct2++;
		}
		if (little[ct2] == '\0')
			return ((char *)big + ct1);
		ct1++;
	}
	return (NULL);
}

/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len && little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void) {
    char *big = "Olá, mundo!";
    char *little = "mundo";
    char *result = ft_strnstr(big, little, 12);

    if (result) {
        printf("Substring encontrada: %s\n", result);
	// Saída: Substring encontrada: mundo!
    } else {
        printf("Substring não encontrada.\n");
    }

    return (0);
}
*/
