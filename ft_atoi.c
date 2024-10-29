/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugusto <laugusto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:57:24 by laugusto          #+#    #+#             */
/*   Updated: 2024/10/15 13:58:23 by laugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	ct;
	int	minus;
	int	nbr;

	ct = 0;
	minus = 1;
	nbr = 0;
	while (nptr[ct] == ' ' || (nptr[ct] >= 9 && nptr[ct] <= 13))
		ct++;
	if (nptr[ct] == '-')
	{
		minus *= -1;
		ct++;
	}
	else if (nptr[ct] == '+')
		ct++;
	while (nptr[ct] >= '0' && nptr[ct] <= '9')
	{
		nbr *= 10;
		nbr += nptr[ct] - '0';
		ct++;
	}
	return (nbr * minus);
}
