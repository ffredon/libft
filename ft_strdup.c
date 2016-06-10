/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:14:54 by fredon            #+#    #+#             */
/*   Updated: 2015/11/30 09:50:32 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	c;
	char	*str;
	size_t	len;

	c = 0;
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(*str) * len);
	if (str == NULL)
		return (NULL);
	while (c < len)
	{
		str[c] = s1[c];
		c++;
	}
	str[c] = '\0';
	return (str);
}
