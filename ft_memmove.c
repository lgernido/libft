/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:24:52 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/06 14:38:16 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (dst == 0  || src == 0)
		return (NULL);
	if (dst > src) // dst est apres src dans la memoire donc on commence la copie par le fin pour eviter le chevauchement
	{
		while (len > 0)
		{
			len --;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		while (i < len)
		{
			*(char *)(dst + i) = *(char *)(src + i); // expliciter l'utilisation de donnees comme type char
			i++;
		}
	}
	return (dst);
}