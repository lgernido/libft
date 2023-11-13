/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgernido <lgernido@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:56:51 by lgernido          #+#    #+#             */
/*   Updated: 2023/11/13 17:52:06 by lgernido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list *) * ((*f)(lst->content)));
	if (!new_list)
		return (NULL);
	while (lst)
	{
		new_list->content = (*f)(lst->content);
		if (!(*f)(lst->content))
			ft_lstclear(new_list, void(*del(void)));
		lst = lst->next;
	}
	return (new_list);
} */
