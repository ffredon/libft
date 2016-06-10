/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:41:47 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 09:32:56 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		c;
	int		d;
	char	*str;

	str = (char*)malloc(sizeof(*str) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	c = 0;
	d = 0;
	while (s1[c])
	{
		str[d] = s1[c];
		d++;
		c++;
	}
	c = 0;
	while (s2[c])
	{
		str[d] = s2[c];
		c++;
		d++;
	}
	str[d] = '\0';
	return (str);
}
