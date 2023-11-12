/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:35:33 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/12 18:10:25 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_lenght;

	src_lenght = ft_strlen(src);
	dest_length = ft_strlen(dst);
	i = 0;
	if (dest_length >= size)
		dest_length = size;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[dest_length + i] = src[i];
			i++;
		}
		dst[dest_length + i] = 0;
	}
	return (dest_length + src_lenght);
}
