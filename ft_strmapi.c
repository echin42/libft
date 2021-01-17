/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:23:46 by echin             #+#    #+#             */
/*   Updated: 2020/11/27 13:52:23 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	size_t			size;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	if (!(new_s = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < size)
		new_s[i] = f(i, s[i]);
	new_s[i] = '\0';
	return (new_s);
}
