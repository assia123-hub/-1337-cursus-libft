/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:45:34 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/14 20:20:44 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a == NULL && b == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}

/*int	main(void)
{
	size_t		i;
	char		dst[12];
	const char	src[] = "assia chalh";

	i = 0;
	ft_memcpy(dst, src, 12);
	while (i < 12)
	{
		printf("%c", dst[i]);
		i++;
	}
	return (0);
}*/

/*int main()
{
	// Test ft_memcpy
	char dst[100];
	char src[] = "atoms\0\0\0\0";

	ft_memcpy(dst, src, 8);
	printf("ft_memcpy result: %s\n", dst);  // Should print "atoms"

	// Test ft_memcmp
	char *s1 = "atoms\0\0\0\0";
	char *s2 = "atoms\0abc";
	size_t size = 8;

	int i1 = memcmp(s1, s2, size);  // Standard memcmp
	int i2 = ft_memcmp(s1, s2, size);  // Our implementation

	if (i1 == i2)
		printf("ft_memcmp passed!\n");
	else
		printf("ft_memcmp failed!\n");

	// Test with some binary data
	char *s3 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
	char *s4 = "\xff\0\0\xaa\0\xde\x00MBS";
	size_t size2 = 9;

	int i3 = memcmp(s3, s4, size2);
	int i4 = ft_memcmp(s3, s4, size2);

	if (i3 == i4)
		printf("ft_memcmp with binary data passed!\n");
	else
		printf("ft_memcmp with binary data failed!\n");

	return (0);
}*/
