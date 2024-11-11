/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:44:38 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/09 19:40:27 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a = (const unsigned char *)s1;
	const unsigned char	*b = (const unsigned char *)s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*arr;
	char	*ass;
	int		m;

	arr = "assia";
	ass = "assim";
	m = ft_memcmp(arr, ass, 4);
	printf("%d", m);
	return (0);
}*/
//[fail]: your memcmp stop at \0
//[fail]: your memcmp does not work with basic input