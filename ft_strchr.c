/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:54:39 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/07 17:25:34 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == 0)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
			i++;
		}
	}
	if (s[i] == c)
		return ((char *)(s + i));
	return (NULL);
}
