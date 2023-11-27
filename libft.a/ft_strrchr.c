/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaoukin <mkaoukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 09:35:45 by mkaoukin          #+#    #+#             */
/*   Updated: 2023/11/21 16:39:22 by mkaoukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	d;

	i = ft_strlen(s);
	d = (char)c;
	while (i > 0 && s[i] != d)
		i--;
	if (s[i] == d)
		return ((char *)s + i);
	return (0);
}
