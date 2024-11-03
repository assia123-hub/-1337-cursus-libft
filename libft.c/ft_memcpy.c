/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:45:34 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/03 16:15:28 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (dst);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}

int	main(void)
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
}
