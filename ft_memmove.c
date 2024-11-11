/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:46:15 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/10 09:29:49 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	if (dst == NULL || src == NULL)
		return (NULL);
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (b < a)
	{
		i = len;
		while (i > 0)
		{
			i--;
			a[i] = b[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dst);
}
// no crash]: your memmove does not segfault when null params is sent
//[no crash]: your memmove does not segfault when null params is sent
/*int main()
{
	char src[0xF0] = "Hello, world!";
	char dst[0xF0];

	// Test case where src is NULL
	ft_memmove(dst, ((void *)0), 5);
	printf("Result when src is NULL: %s\n", dst);  // Should not crash,
		dst unchanged

	// Test case where dst is NULL
	ft_memmove(((void *)0), src, 5);
	printf("Result when dst is NULL: %s\n", src);  // Should not crash,
		src unchanged

	// Test case with valid input
	ft_memmove(dst, src, 5);
	printf("Result when both are valid: %s\n", dst);
		// Should copy first 5 chars of src to dst

	// Test overlapping regions
	ft_memmove(src + 2, src, 5);
	printf("Result when regions overlap: %s\n", src);
		// Should correctly move the memory even with overlap

	return (0);
}*/
