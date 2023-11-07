/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:18:39 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/07 18:19:09 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
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
}