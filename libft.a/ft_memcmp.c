/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaoukin <mkaoukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:17:50 by mkaoukin          #+#    #+#             */
/*   Updated: 2023/11/22 10:37:21 by mkaoukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *) str1;
	s = (char *) str2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s[i] == d[i])
	{
		i++;
	}
	return ((unsigned char)d[i] - (unsigned char)s[i]);
}
