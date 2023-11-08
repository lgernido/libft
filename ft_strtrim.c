/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:45:17 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/08 19:35:37 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsize(char const *s, char const *set)
{
	int	set_size;
	int	trimstr_size;

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
