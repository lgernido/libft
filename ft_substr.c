/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:57:40 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/07 11:59:05 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	int		size;
	char	*str;

	size = 0;
	i = start;
	while (s[i])
		size++;
	if (size > len)
		str = malloc(sizeof(char) * (len + 1));
	if (size <= len)
		str = malloc(sizeof(char) * (size + 1));
	if (str == 0)
		return (NULL);
	j = 0;
	while (str[j])
	{
		str[j] = s[start];
		j++;
		start++;
	}
	return (str);
}
