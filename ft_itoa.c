/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:06:41 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/08 19:17:35 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsize(int n)
{
	int	size;
	int		nb;

	nb = n;
	size = 0;
	if (n < 0)
	{
		nb = -nb;
		size = 1;
	}
	while (nb > 1)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

static char	*ft_strrev(char *str)
{
	int	i;
	int	tmp;
	int	size;

	i = 0;
	size = ft_strlen(str);
	while (i != size / 2)
	{
		str[i] = tmp;
		tmp = str[size];
		str[size] = str[i];
		i++;
		size--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = malloc(sizeof(char) * ft_strsize(n) + 1);
	if (str == 0)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	while (i != ft_strsize(n))
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	str[i] = '\0';
	str = ft_strrev(str);
	return (str);
}
