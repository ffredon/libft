/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fredon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:51:54 by fredon            #+#    #+#             */
/*   Updated: 2015/11/28 09:30:42 by fredon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*t;
	size_t	i;

	if ((t = (char *)malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		t[i] = '\0';
		i++;
	}
	return (t);
}
