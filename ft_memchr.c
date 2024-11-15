/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:43:56 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/14 15:22:21 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			i;

	a = (unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
		{
			return ((char *)(a + i));
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*arr = "assia chalh";
	char		*result;

	result = ft_memchr(arr, 's', 4);
	printf("%s\n", result);
	return (0);
}*/
