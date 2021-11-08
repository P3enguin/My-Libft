/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybensell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:41:43 by ybensell          #+#    #+#             */
/*   Updated: 2021/11/08 12:55:15 by ybensell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	in_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	first_p(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && in_set(s1[i], set) == 1)
	{
		i++;
	}
	return (i);
}

static int	last_p(const char *s1, const char *set)
{
	int	j;

	j = 0;
	while (s1[j] != '\0')
		j++;
	j--;
	while (j >= 0 && in_set(s1[j], set))
	{
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*p;
	int			end;
	int			start;
	int			j;

	if (s1 == 0 || set == 0)
		return (NULL);
	start = first_p(s1, set);
	end = last_p(s1, set);
	j = end - start + 1;
	p = ft_substr(s1, start, (unsigned int)j);
	return (p);
}
