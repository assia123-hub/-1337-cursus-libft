/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:46:15 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/15 11:32:16 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	if (!dst && !src)
		return (NULL);
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (b < a)
	{
		while (len > 0)
		{
			len--;
			a[len] = b[len];
		}
	}
	else
	{
		while (len--)
		{
			*a++ = *b++;
		}
	}
	return (dst);
}

/*int	main(void)
{
	char	src[] = "Hello, World!";
	char	dst[20];
	char	str[] = "Hello, World!";

	// bela overlap
	printf("Before memmove: src = %s, dst = %s\n", src, dst);
	ft_memmove(dst, src, 13);
	printf("After memmove: src = %s, dst = %s\n", src, dst);
	// m3a overlap
	printf("Before memmove: str = %s\n", str);
	ft_memmove(str + 7, str, 5);
	printf("After memmove: str = %s\n", str);
	return (0);
}*/
