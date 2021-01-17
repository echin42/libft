/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 22:06:25 by echin             #+#    #+#             */
/*   Updated: 2020/11/27 13:47:33 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*ptr;

	size = ft_strlen(s);
	i = -1;
	if (!(ptr = malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (++i < size)
		ptr[i] = s[i];
	ptr[i] = '\0';
	return (ptr);
}
