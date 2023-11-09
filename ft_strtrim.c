/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:45:17 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/09 13:55:02 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findset(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (haystack == 0 || needle == 0)
		return (0);
	if (needle == 0 || needle[0] == 0)
		return (0);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && i + j < len && haystack[i
			+ j] == needle[j])
			j++;
		if (needle[j] == 0)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_strsize(char const *s, char const *set)
{
	int	set_size;
	int	trimstr_size;

	set_size = 0;
	while (s)
	{
		if (ft_findset(s, set, ft_strlen(s)) == 1)
			set_size++;
	}
	trimstr_size = ft_strlen(s) - set_size;
	return (trimstr_size);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		i;
	char	*strtrim;

	strtrim = malloc(sizeof(char) * ft_strsize(s, set));
	if (!strtrim)
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
