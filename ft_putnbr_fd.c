/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 22:49:42 by echin             #+#    #+#             */
/*   Updated: 2020/11/27 13:52:51 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int digit;
	int size;
	int temp;

	size = 1;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	temp = n;
	while ((temp /= 10) > 0)
		size *= 10;
	while (size >= 1)
	{
		digit = n / size + '0';
		n = n % size;
		size /= 10;
		ft_putchar_fd(digit, fd);
	}
}
