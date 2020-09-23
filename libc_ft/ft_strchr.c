/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:10:19 by clemo             #+#    #+#             */
/*   Updated: 2020/09/23 16:59:39 by clemo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c_c;

	if (!s)
		return ((char *)NULL);
	c_c = (char)c;
	while (*s)
	{
		if (*s == c_c)
			return ((char *)s);
		s++;
	}
	if (!c_c)
		return ((char *)s);
	return ((char *)NULL);
}
