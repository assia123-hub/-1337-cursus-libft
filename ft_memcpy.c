/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:45:34 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/05 15:02:05 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;
	size_t				i;

	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	i = 0;
	if (a == NULL && b == NULL)
		return (a);
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
