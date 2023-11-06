/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciegernidos <luciegernidos@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:10:30 by luciegernid       #+#    #+#             */
/*   Updated: 2023/10/16 11:16:51 by luciegernid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_tolower(char c)
{
	if (c >= "A" && c <= "Z")
		return c + 32;
	else
		return c;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf('%s', ft_tolower(argv));
	}
	else
		printf("ERREUR");
	return 0;
}