/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:21:48 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/06 17:24:08 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void	*s1, const void	*s2, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s1 + i) != *(unsigned char*)(s2 + i))
			return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
		i++;
	return (0);
	}
}