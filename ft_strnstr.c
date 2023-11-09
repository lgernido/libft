/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:26:03 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/09 17:39:04 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	{
		size_t i;
		size_t j;

		if (little[0] == 0)
			return ((char *)big);
		i = 0;
		while (big[i] && i < len)
		{
			j = 0;
			while (big[i + j] && little[j] && i + j < len && big[i
				+ j] == little[j])
				j++;
			if (little[j] == 0)
				return ((char *)(big + i));
			i++;
		}
		return (NULL);
	}
}