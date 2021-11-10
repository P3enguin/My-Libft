/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:22:43 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/08 15:21:14 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*b;
	int		i;
	int		len;

	b = (char *)s;
	len = ft_strlen(b);
	i = 0;
	while (i <= len)
	{
		if (*b == (char)c)
			return (b);
		i++;
		b++;
	}
	return (NULL);
}
