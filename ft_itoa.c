/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:06:41 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/10 06:25:09 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsize(int n)
{
	int	size;
	int	nb;

	size = 0;
	nb = n;
	if (nb < 0)
	{
		size++;
		n *= -1;
	}
	while (n >= 10)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		nb;
	int		size;

	nb = n;
	size = ft_strsize(n);
	str = malloc(sizeof(char) * size + 1);
	if (str == 0)
		return (NULL);
	str[size] = 0;
	i = 0;
	if (i < size)
	{
		str[size - i - 1] = nb % 10 + '0';
		nb /= 10;
		i++;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
