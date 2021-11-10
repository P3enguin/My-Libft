/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:50:19 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/08 15:29:19 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
