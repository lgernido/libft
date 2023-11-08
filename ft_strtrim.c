/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:45:17 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/08 12:53:48 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strsize(char const *s, char const *set)
{
	size_t	set_size;
	size_t	trimstr_size;

	set_size = ft_strlen(set);
	trimstr_size = ft_strlen(s) - set_size * 2;
	return (trimstr_size);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		i;
	char	*strtrim;

	strtrim = malloc(sizeof(char) * ft_strsize(s, set));
	if (strtrim == 0)
		return (NULL);
	start = ft_strlen(set);
	i = 0;
	while (start != ft_strsize(s, set))
	{
		strtrim[start] = s[i];
		start++;
		i++;
	}
	strtrim[start] = '\0';
	return (strtrim);
}
