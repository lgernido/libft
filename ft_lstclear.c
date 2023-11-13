/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:36:59 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/13 17:41:30 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst)
	{
		tmp = (lst)->next;
		while (lst)
		{
			(*del)(lst->content);
			free(lst);
			lst = lst->next;
		}
		lst = tmp;
	}
}
