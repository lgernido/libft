/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:15:31 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/07 17:54:37 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*asw;
	int		i;

	i = 0;
	asw = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (asw == '\0')
		return (NULL);
	while (s[i])
	{
		asw[i] = (*f)(i, s[i]);
		i++;
	}
	return (asw);
}
