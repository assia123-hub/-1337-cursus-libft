/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:34:37 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/04 19:55:16 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

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

/*int	main(void)
{
	char	*arr;
	char	*ass;
	int		m;

	arr = "assia";
	ass = "assia";
	m = ft_strncmp(arr, ass, 5);
	printf("%d", m);
	return (0);
}*/
