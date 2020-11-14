/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbrunet <clbrunet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 14:47:57 by clbrunet          #+#    #+#             */
/*   Updated: 2020/11/14 14:47:57 by clbrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	char	*dup_bp;

	if (!s || !(dup = malloc((ft_strlen(s) + 1) * sizeof(char))))
		return ((char *)NULL);
	dup_bp = dup;
	while (*s)
	{
		*dup = *s;
		dup++;
		s++;
	}
	*dup = 0;
	return (dup_bp);
}
