/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:17:28 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/08 12:52:56 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char *str, char c)
{
	int		i;
	size_t	words;

	words = 1;
	while (str[i])
	{
		if (str[i] == c)
			words++;
		i++;
		i++;
	}
	return (words);
}

static size_t	tab_size(char *str, char c)
{
	int	i;
	int	size;

	i = 1;
	while (str[i])
	{
		size = 0;
		while (str[i] != c)
		{
			size++;
			i++;
		}
		if (str[i] == c)
			i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char **tab;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	tab = calloc(count_words(s, c), tab_size(s, c));
	if (tab == 0)
		return (NULL);
	while (*tab[j])
	{
		k = 0;
		while (s[i] == c)
		{
			tab[j][k] = s[i];
			i++;
			k++;
		}
		if (s[i] == 1)
			i++;
		j++;
	}
	return (tab);
}