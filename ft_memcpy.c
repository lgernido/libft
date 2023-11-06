/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:02:11 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/06 14:23:33 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == 0)
		return (NULL);
	if (dst != src)
	{
		i = 0;
		while (i < n)
		{
			*(char *)(dst + i) = *(char *)(src + i); // expliciter l'utilisation de donnees comme type char
			i++;
		}
	}
	return (dst);

}
