/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:58:04 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/07 10:58:32 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strdup(const char	*s)
{
	char	*dup;
	int	i;
	int size;

	size = 0;
	while (s[size] != 0)
		size++;
	dup = malloc(sizeof (char) * (size + 1));
	if (dup == 0)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return dup;
}