/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:44:38 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/03 17:04:07 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (a[i] == b[i] && a[i] && b[i] && i < n - 1)
	{
		i++;
	}
	return (a[i] - b[i]);
}

int	main(void)
{
	char	*arr;
	char	*ass;
	int		m;

	arr = "assia";
	ass = "assim";
	m = ft_memcmp(arr, ass, 4);
	printf("%d", m);
	return (0);
}
