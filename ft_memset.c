/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:35:16 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/06 14:09:11 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, size_t len)
{
	int	i;
	
	i = 0;
	if (b == 0)
		return (NULL);
	while (i < len)
	{
		*(unsigned char*)(b + i) = (unsigned char)c;
		i++;
	}
	return b;
}