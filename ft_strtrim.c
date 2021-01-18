/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:36:32 by echin             #+#    #+#             */
/*   Updated: 2021/01/18 20:47:24 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_char(char c, char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static int	ft_has_charset(char *s1, char *set, int *start, int *end)
{
	while (ft_is_char(s1[*start], set))
		(*start)++;
	while (ft_is_char(s1[*end], set))
		(*end)--;
	if (*start || *end < (int)ft_strlen(s1))
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		new_size;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = (int)(ft_strlen(s1) - 1);
	if (!ft_has_charset((char *)s1, (char *)set, &start, &end))
		return ((char *)s1);
	i = -1;
	new_size = (end - start + 1) < 0 ? 0 : end - start + 1;
	if (!(new_str = (char *)malloc((new_size + 1) * sizeof(char))))
		return (NULL);
	while (++i < new_size)
		new_str[i] = s1[start + i];
	new_str[new_size] = '\0';
	return (new_str);
}
