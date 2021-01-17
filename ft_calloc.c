/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 20:41:01 by echin             #+#    #+#             */
/*   Updated: 2020/11/26 22:47:14 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	mem_size;

	if (!nmemb || !size)
		return (malloc(1));
	mem_size = nmemb * size;
	if (!(ptr = malloc(mem_size)))
		return (NULL);
	i = -1;
	while (++i < mem_size)
		ptr[i] = 0;
	return (ptr);
}
