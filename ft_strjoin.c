/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:19:40 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/08 19:33:08 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*s3;
	
	i = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s3 == 0)
		return (NULL);
	while (s1)
	{
		s3[i++] = *s1;
		s1++;
	}
	i = 0;
	while (s2)
	{
		s3[i++] = *s2;
		s2++;
	}
	s3[i] = '\0';
	return (s3);
}
