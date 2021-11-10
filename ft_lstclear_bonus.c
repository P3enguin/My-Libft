/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 09:40:09 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/10 08:45:43 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n;

	if (*lst == 0)
		return ;
	while (*lst != NULL)
	{
		n = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = n;
	}
	*lst = NULL;
}
