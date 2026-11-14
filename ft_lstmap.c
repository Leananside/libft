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
	void	*fcontent;

	newlist_ref = NULL;
	while (lst)
	{
		fcontent = f(lst->content);
		newlist = ft_lstnew(fcontent);
		if (!newlist)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist_ref, newlist);
		lst = lst->next;
	}
	return (newlist_ref);
}
