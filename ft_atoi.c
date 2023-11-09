/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:51:05 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/09 10:08:15 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nb;
	int	neg;
	int	sign;

	i = 0;
	nb = 0;
	sign = 0;
	neg = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
		{
			neg++;
			sign++;
		}
		else
			sign++;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nb = nb + nptr[i] - '0';
		if (ft_isdigit(nptr[i + 1]))
			nb = nb * 10;
		i++;
	}
	if (neg == 1)
		nb = -nb;
	if (sign > 1)
		return (0);
	return (nb);
}
