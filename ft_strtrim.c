/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:43:03 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/18 19:08:31 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*allocate_and_fill(char const *s1, int start, int end)
{
	char	*trim;
	int		i;

	i = 0;
	if (end < start)
	{
		trim = (char *)malloc(1);
		if (!trim)
			return (NULL);
		trim[0] = '\0';
		return (trim);
	}
	trim = (char *)malloc(end - start + 1);
	if (!trim)
		return (NULL);
	while (start <= end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (end >= start && is_set(s1[end], set))
		end--;
	return (allocate_and_fill(s1, start, end));
}
