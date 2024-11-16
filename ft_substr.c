/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:11:59 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/16 17:32:08 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*a;
	size_t	ln;

	if (!s)
		return (NULL);
	ln = ft_strlen(s);
	if (start >= ln)
	{
		a = malloc(1);
		if (!a)
			return (NULL);
		a[0] = '\0';
		return (a);
	}
	if (len > ln - start)
		len = ln - start;
	a = (char *)malloc(len + 1);
	if (!a)
		return (NULL);
	j = 0;
	while (j < len)
		a[j++] = s[start++];
	a[j] = '\0';
	return (a);
}
