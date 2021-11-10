/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:39:27 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/08 15:22:33 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*b;
	int		i;

	b = (char *)s;
	i = 0;
	while (b[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (b[i] == (char)c)
		{
			return (b + i);
		}
		i--;
	}
	return (NULL);
}
