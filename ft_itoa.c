/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:23:31 by echin             #+#    #+#             */
/*   Updated: 2020/11/26 22:48:43 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str_n;
	char			digit;
	int				size;
	unsigned int	temp;

	size = n < 0 ? 2 : 1;
	temp = n < 0 ? -n : n;
	while ((temp /= 10) > 0)
		size++;
	if (!(str_n = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	str_n[size] = '\0';
	temp = n < 0 ? -n : n;
	while (--size >= 0)
	{
		digit = temp % 10 + '0';
		str_n[size] = digit;
		temp = temp / 10;
	}
	if (n < 0)
		str_n[0] = '-';
	return (str_n);
}
