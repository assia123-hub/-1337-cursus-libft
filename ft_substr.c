/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:11:59 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/08 18:43:05 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*a;
	size_t	ln;

	if (!s)
		return (NULL);
	ln = ft_strlen(s);
	if ((size_t)start >= ln)
		return (calloc(1, 1));
	if (len > ln - (size_t)start)
		len = ln - (size_t)start;
	a = (char *)malloc(len + 1);
	if (!a)
		return (NULL);
	i = (size_t)start;
	j = 0;
	while (i < ln && j < len)
	{
		a[j++] = s[i++];
	}
	a[j] = '\0';
	return (a);
}
/*int	main(void)
{
	printf("%s", ft_substr("assiachalh", 4, 10));
	return (0);
}*/
