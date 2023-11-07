/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:19:40 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/07 16:28:04 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		size_s1;
	int		size_s2;
	char	*s3;

	size_s1 = 0;
	size_s2 = 0;
	i = 0;
	j = 0;
	while (s1[size_s1])
		size_s1++;
	while (s2[size_s2])
		size_s2++;
	s3 = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (s3 == 0)
		return (NULL);
	while (s1[i])
	{
		s3[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		s3[j++] = s2[i];
		i++;
	}
	s3[j] = 0;
	return (s3);
}
