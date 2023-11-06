/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:12:06 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/06 17:15:00 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char	*s, int c)
{
	
	int	i;

	i = 0;
	while (s[i] != 0) // boucle qui determine la longueur de s
		i++;
	while (i >= 0) // chercher dans la chaine a partir de la fin
	{
		if (s[i] == (char)c)
			return ((char*)(s + i));
		i--;
	}
	return (NULL);
}