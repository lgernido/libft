/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:21:35 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/07 18:18:56 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int nb;

	nb = n;
	if (nb == -2147483647)
		write(fd, '-2147483647', 11);
	else if (nb < 0)
		nb = -nb;
	else if (nb < 10)
		write(fd, nb + '0', 1);
	else if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
}