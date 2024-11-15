/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:35:42 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/14 17:15:03 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] && (i + j) < len && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*haystack = "Hello World";
	const char	*needle = "World";
	size_t		len;
	char		*result;

	len = 10;
	result = ft_strnstr(haystack, needle, len);
	printf("%s", result);
	return (0);
}*/
