/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:09:45 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/09 11:30:45 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = ft_strlen(s);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == 0)
	{
		return (NULL);
	}
	i = 0;
	if (start <= ft_strlen(s))
	{
		while (s[i] != '\0' && i < len)
		{
			p[i] = s[i + start];
			i++;
		}
	}
	p[i] = '\0';
	return (p);
}
