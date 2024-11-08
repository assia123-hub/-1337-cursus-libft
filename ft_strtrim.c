/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:43:03 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/08 13:54:51 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	is_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trim;
	int		i;

	start = 0;
	end = ft_strlen(s1) - 1;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_set(s1[start], set))
	{
		start++;
	}
	while (end >= start && is_set(s1[end], set))
	{
		end--;
	}
	if (end < start)
	{
		trim = (char *)malloc(1);
		if (!trim)
			return (NULL);
		trim[0] = '\0';
		return (trim);
	}
	trim = (char *)malloc(end - start + 2);
	if (!trim)
		return (NULL);
	while (start <= end)
	{
		trim[i++] = s1[start++];
	}
	trim[i] = '\0';
	return (trim);
}

/*int	main(void)
{
	printf("%s", ft_strtrim("ababaaaMy name is Simonbbaaabbad", "ab"));
}*/
