/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:30:40 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/15 19:36:59 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = 0;
	lensrc = 0;
	i = 0;
	while (dst[lendst] && lendst < dstsize)
	{
		lendst++;
	}
	while (src[lensrc])
	{
		lensrc++;
	}
	if (dstsize <= lendst)
		return (dstsize + lensrc);
	while (src[i] && (lendst + i + 1) < dstsize)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}

// int	main(void)
// {
// 	char	dst[20] = "Hello, ";
// 	char	src[] = "World!";
// 	size_t	n;

// 	n = ft_strlcat(dst, src, 12);
// 	printf("%zu", n);
// 	return (0);
// }
