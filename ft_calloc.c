/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:58:19 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/07 16:44:46 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char	**tab;
	int		i;
	int		j;

	if (nmemb == '\0' || size == '\0')
		return (NULL);
	tab = malloc(nmemb * size);
	if (tab = 0)
		return (NULL);
	i = 0;
	while (*tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			tab[i][j] = '\0';
			j++;
		}
		i++;
	}
	return (tab);
}
