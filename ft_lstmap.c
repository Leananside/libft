/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tverschu <tverschu@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 02:01:52 by tverschu          #+#    #+#             */
/*   Updated: 2026/11/10 03:05:03 by tverschu         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newlist_ref;

	newlist_ref = NULL;
	while (lst)
	{
		newlist = ft_lstnew((*f)(&lst->content));
		if (newlist_ref == NULL)
			newlist_ref = newlist;
		if (newlist == NULL)
		{
			ft_lstclear(&newlist_ref, del);
			return (NULL);
		}
		newlist->content = (*f)(&lst->content);
		newlist = newlist->next;
		lst = lst->next;
	}
	return (newlist);
}
