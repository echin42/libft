/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 11:57:30 by echin             #+#    #+#             */
/*   Updated: 2021/01/16 16:18:16 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *curr;
	t_list *next;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		del(curr->content);
		next = curr->next;
		free(curr);
		curr = next;
	}
	*lst = NULL;
}
