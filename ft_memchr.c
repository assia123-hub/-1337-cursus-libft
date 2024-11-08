/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:43:56 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/05 16:59:05 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*a;
	unsigned char		b;
	size_t				i;

	a = (const unsigned char *)s;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
		{
			return ((void *)(a + i));
		}
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char	*arr = "assia chalh";
	char		*result;

	result = ft_memchr(arr, 's', 6);
	printf("%s\n", result);
	return (0);
}*/
