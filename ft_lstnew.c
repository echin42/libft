/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:56:09 by echin             #+#    #+#             */
/*   Updated: 2020/11/26 22:50:11 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elm;

	if (!(elm = (t_list *)malloc(sizeof(*elm))))
		return (NULL);
	elm->content = content;
	elm->next = NULL;
	return (elm);
}
