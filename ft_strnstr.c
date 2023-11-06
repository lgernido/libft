/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:26:03 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/06 17:32:21 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	{
	size_t	i;
	size_t	j;

	if (haystack == 0 || needle == 0)
		return (NULL);
	if (needle == 0 || needle[0] == 0)
		return ((char*)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] &&
				i + j < len && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == 0)
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}
}