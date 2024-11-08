/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschalh <aschalh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:27:54 by aschalh           #+#    #+#             */
/*   Updated: 2024/11/04 18:56:06 by aschalh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *)s);
		}
		s++;
	}
	if (a == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int	main(void)
{
	char	*arr;
	char	*result;

	arr = "assia chalh";
	result = ft_strchr(arr, 's');
	printf("%s", result);
	return (0);
}*/
