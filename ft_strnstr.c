/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 20:39:14 by echin             #+#    #+#             */
/*   Updated: 2020/11/27 13:45:15 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	s2_size;
	size_t	i;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	s2_size = ft_strlen(s2);
	while (s1[i] && (i + s2_size) <= n)
	{
		if (ft_strncmp(s1 + i, s2, s2_size) == 0)
			return ((char *)(s1 + i));
		i++;
	}
	return (0);
}
