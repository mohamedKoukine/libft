/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaoukin <mkaoukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:06:39 by mkaoukin          #+#    #+#             */
/*   Updated: 2023/11/24 17:20:06 by mkaoukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*h;
	t_list	*d;
	t_list	*c;

	if (!lst ||!f ||!del)
		return (NULL);
	h = NULL;
	while (lst)
	{
		c = (*f)(lst->content);
		d = ft_lstnew(c);
		if (!d)
		{
			del(c);
			ft_lstclear(&h, del);
			return (NULL);
		}
		ft_lstadd_back(&h, d);
		lst = lst->next;
	}
	return (h);
}
