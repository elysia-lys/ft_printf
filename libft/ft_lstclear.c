/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeliew <yeliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:30:01 by yeliew            #+#    #+#             */
/*   Updated: 2026/08/04 16:50:58 by yeliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp_next;
	}
}
