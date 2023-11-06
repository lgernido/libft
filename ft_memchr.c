/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:17:28 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/06 17:19:53 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void	*s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (s == 0)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char*)(s + i) == (unsigned char)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}