/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaoukin <mkaoukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:33:22 by mkaoukin          #+#    #+#             */
/*   Updated: 2023/11/24 16:51:57 by mkaoukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dest;
	s = (char *)src;
	if (!d && !s)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n > i + 1)
		{
			n--;
			d[n] = s[n];
		}
		return (dest);
	}
	while (++i < n)
		d[i] = s[i];
	return (dest);
}
