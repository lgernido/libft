/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:17:11 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/10 20:28:10 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	i;
	size_t	size;

	size = ft_strlen(s);
	if (size > n)
		dup = malloc(sizeof(char) * (n + 1));
	else
		dup = malloc(sizeof(char) * (size + 1));
	if (dup == 0)
		return (NULL);
	i = 0;
	while (s[i] && i < n)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static size_t	word_size(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	size;
	int		words;
	char	**res;

	words = count_words(s, c);
	i = 0;
	if (s == 0)
		return (NULL);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		size = word_size(s, c);
		res[i] = ft_strndup(s, size);
		if (!res[i])
		{
			free(res[i]);
			return (NULL);
		}
		s += size;
		i++;
	}
	res[i] = NULL;
	return (res);
}
