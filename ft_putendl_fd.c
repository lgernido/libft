/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:55:01 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/07 18:19:06 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	while (s[i])
	{
		write(fd, &s[i], size);
		i++;
	}
	write(fd, '\0', 2);
}