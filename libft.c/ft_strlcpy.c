/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:32:50 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/03 18:42:30 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
	while (src[i])
	{
		if (src[i] < dstsize + 1)
		{
			dst[i] = src[i];
		}
		else
			dst[i] = dstsize - 1;
		i++;
	}
	return (src[i]);
}

int	main(void)
{
	char	*arr;
	char	*ass;
	size_t	res;

	arr = "asssiachalh";
	res = ft_strlcpy(ass, arr, 4);
	printf("%zu", res);
	return (0);
}
