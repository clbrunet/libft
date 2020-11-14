/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:47:06 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/14 14:47:06 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*s_s;
	char	c_c;

	if (!s)
		return (NULL);
	s_s = (char *)s;
	c_c = (char)c;
	while (n--)
		*(s_s++) = c_c;
	return (s);
}
