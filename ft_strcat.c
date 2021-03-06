/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:39:39 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 21:24:18 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		c;
	int		d;

	c = 0;
	d = 0;
	while (s1[c])
		c++;
	while (s2[d])
	{
		s1[c] = s2[d];
		c++;
		d++;
	}
	s1[c] = '\0';
	return (s1);
}
