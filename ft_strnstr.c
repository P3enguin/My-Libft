/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:31:38 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/09 15:49:32 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*need;
	char	*hay;

	hay = (char *)haystack;
	need = (char *)needle;
	if (*need == '\0')
		return (hay);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		if (hay[i] == need[j])
		{
			while (i + j < len && need[j] == hay[i + j])
			{
				j++;
				if (need[j] == '\0')
					return (hay + i);
			}
		}
		i++;
	}
	return (NULL);
}
