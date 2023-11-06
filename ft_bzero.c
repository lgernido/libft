/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:49:25 by luciegernid       #+#    #+#             */
/*   Updated: 2023/11/06 14:11:10 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		*(char*)(s +i) = 0;
		i++;
	}
}