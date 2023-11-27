/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaoukin <mkaoukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:17:21 by mkaoukin          #+#    #+#             */
/*   Updated: 2023/11/23 15:08:47 by mkaoukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*d;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		d = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = d;
	}
}
