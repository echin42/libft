/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 22:26:29 by echin             #+#    #+#             */
/*   Updated: 2020/11/26 22:48:06 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s2_size;
	size_t	i;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if (!(ptr = (char *)malloc((s1_size + s2_size + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < s1_size)
		ptr[i] = s1[i];
	i = -1;
	while (++i < s2_size)
		ptr[s1_size + i] = s2[i];
	ptr[s1_size + i] = '\0';
	return (ptr);
}
