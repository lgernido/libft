/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:54:39 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/06 14:57:54 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char	*s, int c)
{
	int	i;

	i = 0;
	if (s == 0)
		return (NULL);
	while (s[i])
	{
		if s[i] == char c;
			return ((char*)(s + i));
			i ++;
	}
	if s[i] == char c;
		return ((char*)(s + i));
	return (NULL)
}