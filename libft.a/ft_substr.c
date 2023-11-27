/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaoukin <mkaoukin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:05:17 by mkaoukin          #+#    #+#             */
/*   Updated: 2023/11/21 17:34:18 by mkaoukin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*d;
	unsigned int	l;
	unsigned int	i;

	l = len;
	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || l == 0)
		return (ft_strdup(""));
	if (start + l > ft_strlen(s))
	{
		l = ft_strlen(s) - start;
	}
	d = (char *)malloc(sizeof(char) * l + 1);
	if (!d)
		return (0);
	while (s[start] && i < l)
	{
		d[i] = s[start];
		i++;
		start++;
	}
	d[i] = '\0';
	return (d);
}
