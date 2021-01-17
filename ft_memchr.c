/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:10:36 by echin             #+#    #+#             */
/*   Updated: 2020/11/26 22:43:14 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s_char;

	i = -1;
	s_char = (unsigned char *)s;
	while (++i < n && *s_char != (unsigned char)c)
		s_char++;
	if (i == n)
		return (NULL);
	return (s_char);
}
